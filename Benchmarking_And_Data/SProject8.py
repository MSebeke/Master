from datetime import date
import time
SingleRFAMList=[]
MultiRFAMList=[]
today=date.today()
TimeRN=time.localtime(time.time())

def SeqSetAndSort(x,y): #Makes a set of every single SeqName to make a SingleDataList which contains individual Lists of every SeqName
    SeqSet=set(x)
    SingleDataList=[]
    for element in SeqSet:
        SingleData=y.loc[y["SeqName"]==element]
        SingleDataList.append(SingleData)
    return SingleDataList

def MFESort(x): #Sorts elements in a iterable by the mfe 
    for element in x:
        element=element.sort_values("MFE")
    return x

def Lensorting(x): #Splits Sequences based on whether they contain one or multiple RFAM motifs
    for element in x:
        bruh=element.iloc[:1]
        bruh2=bruh["RFAMMotif"]
        for object in bruh2:
            if len(object)==1:
                SingleRFAMList.append(element)
            else:
                MultiRFAMList.append(element)
    return SingleRFAMList,MultiRFAMList

def SingleRFAMListCounting(x,u,w): #Calculates how many of the Sequences containing only one RFAM Motif are within the mfe range specified by Filter
    y=0
    for element in x:
        bruhlist=[]
        if len(element.index)==2:
            bruh1=element.iloc[:1]
            bruh2=element.iloc[1:2]
            for obj in bruh1["MFE"]:
                bruhlist.append(obj)
            for obj2 in bruh2["MFE"]:
                bruhlist.append(obj2)
            p=float(bruhlist[0])-float(bruhlist[1])
            if p in range(u,1,w):
                y+=1
        else:
            pass
    return int(y)

def MultiRFAMListCouting(x,u,w,rmdict): #Calculates how many of the sequences containing two or more RFAM Motifs are within the mfe range specified by Fitler 
    y=0
    for element in x:
        SList=[]
        Best=element.iloc[:1]
        Best2=Best["RFAMMotif"]
        element=element.iloc[1:]
        for rm in Best2:
            for rm2 in rm:
                SList.append(rmdict[rm2])
        for idx,dub in enumerate(element["RFAMMotif"]):
            if len(dub)==len(SList): #Wenn eins der RFAMMotifen die gleiche Länge hat wie die beste Sequenz, muss sie  alle Motife enthalten da nur die Strukturen hier landen die genau die Motife enthalten
                a=float(Best["MFE"])
                element2=element.iloc[idx]
                b=float(element2["MFE"])
                p=float(a-b)
                if p in range(u,1,w):
                    y+=1 #Only counts +1 if the sequence that contains both of the RFAM Motifs is within the mfe range
                else:pass
            else:pass
    return int(y)

def Output(a,b,c,e,f,g,h,Analysisfile_txtPATH,Lenfilter,CMDict):#Writes the Output File AnalysisFile.txt acting kind of like a log. Contains the date, the Input file, the Filter value, plus the analysis
    with open(Analysisfile_txtPATH,"a") as file:
        #file.write("Analysis started on: {day}.{month}.{year} at {hour}:{minute}\n".format(year=BeginDay.year,month=BeginDay.month,day=BeginDay.day,hour=BeginTime.tm_hour,minute=BeginTime.tm_min))      
        file.write("Analysis finished on: {day}.{month}.{year} at {hour}:{minute}\n".format(year=today.year,month=today.month,day=today.day,hour=TimeRN.tm_hour,minute=TimeRN.tm_min))
        file.write("Input used: {}\n".format(h))
        file.write("Sequence Length Range: {LowerLengthFilter} - {UpperLengthFilter}\n".format(LowerLengthFilter=Lenfilter[0],UpperLengthFilter=Lenfilter[1]-1))
        file.write("MFE Filter: {} kcal/mol\n".format(e/10))
        file.write("Sequence within the Length Range: {}\n".format(len(CMDict))) #How many sequences were in the chosen Range at all?
        file.write("Sequences with at least one found RFAM Motif: {}\n".format(len(a))) #How many sequences had at least one of their RFAM Motifs found in Out.txt
        file.write("Sequences with one RFAM Motif: {}\n".format(len(b))) #Of those sequences how many were sequences with one Motif?
        file.write("Sequences with multiple RFAM Motifs: {}\n".format(len(c)))#Of those sequences how many were seqeucnes with two or more motifs?
        file.write("Singles found withhin the MFE threshhold: {}\n".format(f)) #How many of those sequences with a Found Motif for the singles were within the mfe range
        file.write("Multis found within the MFE threshhold: {}\n".format(g)) #How many of those sequences with either of their searched motif AND both in one were found?
        k=f+g
        file.write("Added found withhin the MFE threshhold: {}\n".format(k))

def Output2(a,b,c,e,f,g,Analysisfile_txtPATH,CMDict):
    with open(Analysisfile_txtPATH,"a") as file:
        file.write("\nAdditional Analysis:\n")
        file.write("MFE Filter: {} kcal/mol\n".format(e/10))
        file.write("Sequence within the Length Range: {}\n".format(len(CMDict)))
        file.write("Sequences with at least one found RFAM Motif: {}\n".format(len(a)))
        file.write("Sequences with one RFAM Motif: {}\n".format(len(b)))
        file.write("Sequences with multiple RFAM Motifs: {}\n".format(len(c)))
        file.write("Singles found withhin the MFE threshhold: {}\n".format(f))
        file.write("Multis found withhin the MFE threshhold: {}\n".format(g))
        k=f+g
        file.write("Added found withhin the MFE threshhold: {}\n".format(k))
        file.write("\n")

def Output3(Analysisfile_txtPATH):
    with open(Analysisfile_txtPATH,"a") as file:
        file.write("________________________\n")