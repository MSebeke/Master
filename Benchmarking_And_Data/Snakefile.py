import SProject6Rerework as P6
import SProject7 as P7
import SProject8 as P8
import SProject9 as P9
import LogEditingSoftware as LES
import os
import pandas as pd
import sys
from datetime import date
from collections import Counter

rmdict={"RM00003":"C","RM00008":"4","RM00010":"K","RM00011":"K","RM00018":"S","RM00019":"S","RM00024":"2","RM00029":"3"}
mrdict={"C":"RM00003","4":"RM00008","K":"RM00010","K":"RM00011","S":"RM00018","S":"RM00019","2":"RM00024","3":"RM00029"}
slist=["C","4","K","S","2","3","X"]
molist=["RM00003","RM00008","RM00010","RM00011","RM00018","RM00019","RM00024","RM00029"]
Üdict={"RM00003":"C-Tetraloop","RM00008":"GNRA-Tetraloop","RM00010":"Kink-Turn","RM00011":"Kink-Turn","RM00018":"Sarcin-Ricin Motif","RM00019":"Sarcin-Ricin Motif","RM00024":"T-Loop","RM00029":"UNCG-Tetraloop"}

LowerLengthFilter=0
UpperLengthFilter=1001 #Length you want to filter to +1 since range() function excludes upper limit
LengthFilters=(LowerLengthFilter,UpperLengthFilter)
Filter1=-150#MFE Filter levels have to be inserted x10
Filter2=-100
Filter3=-50
Filter4=-30
Steps=1

today=date.today()

def Setting_Filepaths():
    CWD=os.getcwd()
    platform=sys.platform
    if platform == "win32":
        motif_matchesPATH= CWD + "\\Snakefile\\motif_matches.txt"
        rfam_seedPATH= CWD + "\\Snakefile\\RfamCut.seed"
        Snakefile_logPATH= CWD + "\\Snakefile\\Snakefile.log"
        Out_txtPATH=CWD + "\\Snakefile\\AnalysisOutput\\Out.txt"
        TempOut_PATH= CWD + "\\Snakefile\\TempOut.txt"
        Analysisfile_txtPATH= CWD + "\\Snakefile\\AnalysisOutput\\Analysisfile.txt"
        Out_exePATH = "wsl time /mnt/c/Master/Snakefile/moRNA/out -k 25 "
        Alignment_Encoding= "UTF-8"
    if platform == "linux":
        print("Did you change the HairpinMotifs.csv and InternalMotifs.csv file paths in moRNA/motif.cc to the appropriate filepaths?")
        motif_matchesPATH= CWD + "/motif_matches.txt"
        rfam_seedPATH= CWD + "/RfamCut.seed"
        Snakefile_logPATH= CWD + "/Snakefile.log"
        Out_txtPATH=CWD + "/AnalysisOutput/Out.txt"
        TempOut_PATH=CWD + "/TempOut.txt"
        Analysisfile_txtPATH= CWD + "/AnalysisOutput/Analysisfile.txt"
        Out_exePATH = "time /home/ubuntu/Master/Snakefile/moRNA/out -k 25 "
        Alignment_Encoding="latin-1"
    Eingabe=str(sys.argv)
    DeletionCommandO="-o"
    DeletionCommandA="-a"
    DeletionCommandL="-l"
    DeletionCommand="-all"
    if DeletionCommandO in Eingabe:
        try:
            os.remove(Out_txtPATH)
        except:pass
    if DeletionCommandA in Eingabe:
        try:
            os.remove(Analysisfile_txtPATH)
        except:pass
    if DeletionCommandL in Eingabe:
        try:
            os.remove(Snakefile_logPATH)
        except:pass
    if DeletionCommand in Eingabe:
        try:
            os.remove(Out_txtPATH)
        except:pass
        try:
            os.remove(Analysisfile_txtPATH)
        except:pass
        try:
            os.remove(Snakefile_logPATH)
        except:pass
    return motif_matchesPATH,rfam_seedPATH,Snakefile_logPATH,Out_txtPATH,Analysisfile_txtPATH,Out_exePATH,Alignment_Encoding,TempOut_PATH

if __name__=="__main__":
    pd.options.mode.chained_assignment=None#This supresses the warning that Modified_Data and Data both reference the same Object Post P7.DataOperations(data)
    motif_matchesPATH,rfam_seedPATH,Snakefile_logPATH,Out_txtPATH,Analysisfile_txtPATH,Out_exePATH,Alignment_Encoding,TempOut_PATH = Setting_Filepaths()
    Fdict=P6.Tlist2(motif_matchesPATH) #Fdict is a large dictionary containing every sequence ID available on motif_matches.txt and matches them with a list of their annotated Rfam motifes while filtering out Sequences containing motifs that are not part of the global molist.
    Seqdict=P6.Alignment(Fdict,rfam_seedPATH,Alignment_Encoding)#Creates a Seqdict, containing every Sequence ID with their belonging Sequences as Key:Value pairs
    Seqdict2=P6.CheckSequences(Seqdict) #Filters through the Seqdict and removes all the Sequences that contain a nucleotide that isn't A,U,G or C. Might revisist this to change it to just duplicating the sequences and adding in the Nulceotides instead.
    Seqdict3=P6.LF(Seqdict2,LowerLengthFilter,UpperLengthFilter)#Filters the Seqdict again for the specified Sequence Length based on LowerLengthFilter and UpperLengthFilter
    CMDict=P6.MakeCMDict(Seqdict3,Out_exePATH)#Creates the Command-Dictionary, which contains each Sequences ID as Key and the moRNA call for that specific Sequence as Value
    #return_dict=P6.Multi(CMDict)#This is the Multiprocessing part of the programm, it executes a moRNA call for every single sequence, while also recording the time the sequence needed to execute by Logging the information from the time call. (It's a overcomplicated mess and I really hope it works to be honest, don't ask questions here I really don't know)
    with open(Snakefile_logPATH,"a") as file:
        return_dict=LES.PoolTest(file,CMDict)#THis is now the multiprocessing part, taking care of the whole Multi-Process as well as logging data. Running this on the server results in the classic Out, AS WELL AS a very detailed Log entry containing both the time as well as the MaxResidue which logs the amount of memory used in Kilobytes
        file.write("_______________________________________________________________\n") #Writes the designated spacer at the end of the LogFile to ensure the data of separate runs is easily accessible
    P6.MakeOut(return_dict,Fdict,Out_txtPATH,TempOut_PATH)#MakeOut takes the created return_dict from the Multiprocessing, which contains each Sequences ID as a key along with their moRNA result as a value. It then writes these in a better formated matter into the Out.txt file, allowing for analysis later.
    data=pd.read_csv(TempOut_PATH,sep="\t",header=None)#Data is read back to the programm from the created file. This Step seems nonsensical, but does offer the ability to later check on the data at this point in time (if necessary) to validate or further investigate the data
    os.remove(TempOut_PATH)#Removes the temp
    Modified_Data=P7.DataOperations(data)#At this point, the data is read and modified with: Kcal (dividing the moRNA energy ratings by 10 to get kcal/mol), splitrm (splits the rm strings back into iterables) and splitfound (splits the found motifs back into iterables)
    Topdf=P7.MakeSetsAndListsAndTopDF(Modified_Data)#This step includes multiple different modifications and operations allowing for all the data to be correctly read by the progam and then it is sorted and filtered to make the Topdf, containing only the best result for each Entry in the NameSet plus those results that share a FoundMotif with the the searched RfamMotifs.
    #Irgendetwas greift beim großen Datensatz, aber nicht mit rfamCut.seed, beim großen ist len(CMDict) != len(SingleDataList), während beim kleinen len(CMDict)=len(SingleDataList)
    SingleDataList=P8.SeqSetAndSort(Topdf["SeqName"],Topdf)#Produces the SingleDataList, each entry contains all the entries existing for the given name. This way the each for the Sequences can be rated and sorted individually.
    P8.MFESort(SingleDataList)#Each entry in the SingleDataList is sorted by their MFE values, listing the lowest value as at the top
    SingleRFAMList,MultiRFAMList=P8.Lensorting(SingleDataList)#Splits up the SingleDataList into two lists, consisting of one which only includes those with multiple RFAM motifs and the other only containing those entries with a single RFAM Motif listed.
    i1=P8.SingleRFAMListCounting(SingleRFAMList,Filter1,Steps)#Counts up all the SingleRFAM Sequences, based on whether their respective motifs were found or not
    j1=P8.MultiRFAMListCouting(MultiRFAMList,Filter1,Steps,rmdict)#Does the same as SingleRFAMListCounting but with those Sequences annotated with two different RFAMMotifs
    P8.Output(SingleDataList,SingleRFAMList,MultiRFAMList,Filter1,i1,j1,rfam_seedPATH,Analysisfile_txtPATH,LengthFilters,CMDict)#Writes Output for Analysisfile.txt, contains all kinds of info on the current run analysis
    Namelist,RFAMdict,Foundlist=P9.Pandas_CreateNamelistAndRFAMdict(Modified_Data)#Reads the Modified_Data DataFrame to read the list of names, a dictionary linking each name to their RFAMMotif and a List of Found Motifs. Since lists are ordered the connection of Names and Founds later is easily possible.
    Counterlist=Counter(Namelist)#Counts the amount of times each name came up in the SeqName Column of the Modified_Data
    FoundDict=P9.CreateFoundDict(Foundlist,Namelist,Counterlist)#PROJECT9 analysis is at the point of writing this (22.11.2022) not yet able to differentiate by how close the found motif was to the Best Possible Result, this functionality will likely never be implemented as we plan to restrict this via the moRNA algorithm making it not necessary
    FoundDict2=P9.FoundDictSets(FoundDict)#Creates a dictionary containing the names of each sequences as the key with the value being a list of all the different motifs that were found for that sequence
    Nameset=set(Namelist)#Just creates a set from the Namelist, since the namelist contains each sequence name multiple times (due to it just being a list of all the SeqName entries)
    RFAMListCounted=P9.IndvCounter(Nameset,RFAMdict,FoundDict2) #Counts for each Name in the Nameset if all their annotated RFAM Motifs were found in ANY of their respective Outputs
    Countedlist=P9.RFAMDictCounter(RFAMdict)#Counts how many times each RFAM Motif was the search goal
    P9.MathAndOutput(Countedlist,RFAMListCounted,Üdict,Analysisfile_txtPATH)#Calculates the Output for the Analysisfile
    #As said for Project9, this is only a premature version that still does the whole analysis with different MFE Filters, this might be deprecated in the future as we learn how to restrict Output from moRNA via the MFE levels(22.11.2022)
    i2=P8.SingleRFAMListCounting(SingleRFAMList,Filter2,Steps)#Counts up all the SingleRFAM Sequences, based on whether their respective motifs were found or not
    j2=P8.MultiRFAMListCouting(MultiRFAMList,Filter2,Steps,rmdict)#Does the same as SingleRFAMListCounting but with those Sequences annotated with two different RFAMMotifs
    P8.Output2(SingleDataList,SingleRFAMList,MultiRFAMList,Filter2,i2,j2,Analysisfile_txtPATH,CMDict)#Writes Output for Analysisfile.txt, contains all kinds of info on the current run analysis
    i3=P8.SingleRFAMListCounting(SingleRFAMList,Filter3,Steps)#Counts up all the SingleRFAM Sequences, based on whether their respective motifs were found or not
    j3=P8.MultiRFAMListCouting(MultiRFAMList,Filter3,Steps,rmdict)#Does the same as SingleRFAMListCounting but with those Sequences annotated with two different RFAMMotifs
    P8.Output2(SingleDataList,SingleRFAMList,MultiRFAMList,Filter3,i3,j3,Analysisfile_txtPATH,CMDict)#Writes Output for Analysisfile.txt, contains all kinds of info on the current run analysis
    i4=P8.SingleRFAMListCounting(SingleRFAMList,Filter4,Steps)#Counts up all the SingleRFAM Sequences, based on whether their respective motifs were found or not
    j4=P8.MultiRFAMListCouting(MultiRFAMList,Filter4,Steps,rmdict)#Does the same as SingleRFAMListCounting but with those Sequences annotated with two different RFAMMotifs
    P8.Output2(SingleDataList,SingleRFAMList,MultiRFAMList,Filter4,i4,j4,Analysisfile_txtPATH,CMDict)#Writes Output for Analysisfile.txt, contains all kinds of info on the current run analysis
    P8.Output3(Analysisfile_txtPATH)#This just adds the dashed line at the end of the analysis file to differentiate between multiple runs of the programm