from collections import Counter

rmdict={"RM00003":"C","RM00008":"4","RM00010":"K","RM00011":"K","RM00018":"S","RM00019":"S","RM00024":"2","RM00029":"3"}
mrdict={"C":"RM00003","4":"RM00008","K":"RM00010","K":"RM00011","S":"RM00018","S":"RM00019","2":"RM00024","3":"RM00029"}
Üdict={"RM00003":"C-Tetraloop","RM00008":"GNRA-Tetraloop","RM00010":"Kink-Turn","RM00011":"Kink-Turn","RM00018":"Sarcin-Ricin Motif","RM00019":"Sarcin-Ricin Motif","RM00024":"T-Loop","RM00029":"UNCG-Tetraloop"}

def CreateFoundDict(x,y,z):
    SortedSet=[]
    InDict={}
    Founddict={}
    for entry in y:
        if entry not in SortedSet:
            SortedSet.append(entry)
    i=0
    j=-1
    for entry in SortedSet:
        j+=z[entry]
        InDict[entry]=[i,j]
        Templist=x[i:j+1]
        i=j+1
        Founddict[entry]=Templist
    return Founddict

def IndvCounter(x,y,z,):
    RFAMList=[]
    for entry in x:
        RFAMS=y[entry]
        FOUNDS=z[entry]
        for rfam in RFAMS:
            if rmdict[rfam] in FOUNDS:
                RFAMList.append(rfam)
    RFAMListCounted=Counter(RFAMList)
    return RFAMListCounted

def FoundDictSets(x):
    FoundDict2={}
    for entry in x:
        Templist=[]
        for entry2 in x[entry]:
            String=''.join(entry2)
            Templist.append(String)
        templist=[]
        trulist=[]
        NewFoundSet=set(Templist)
        for Found in NewFoundSet:
            temp=list(Found)
            templist.append(temp)
        for entry2 in templist:
            for entry3 in entry2:
                if entry3 not in trulist:
                    trulist.append(entry3)
        FoundDict2[entry]=trulist
    return FoundDict2

def RFAMDictCounter(x):
    Counterlist=[]
    for entry in x:
        for rfam in x[entry]:
            Counterlist.append(rfam)
    Countedlist=Counter(Counterlist)
    return Countedlist

def MathAndOutput(x,y,z,Analysisfile_txtPATH):
    for entry in x:
        Gesamt=x[entry]
        try:
            Gezählt=y[entry]
        except:
            Gezählt=0
        Verhältnis=Gezählt/Gesamt*100
        Verhältnis=round(Verhältnis,2)
        Name=z[entry]
        Output="{Name} wurde insgesamt {Gesamt} gesucht und {Gezählt} mal gefunden. Genauigkeit fuer {Name} liegt bei {Verhältnis}%\n".format(Name=Name,Gesamt=Gesamt,Gezählt=Gezählt,Verhältnis=Verhältnis)
        with open(Analysisfile_txtPATH,"a") as file:
            file.write(Output)
    return 0

def ReadAndRemove(x):
    with open(x,"r") as file:
        file=file.readlines()
    for line in file:
        if line == "\n":
            file.remove(line)
    return file

def Pandas_CreateNamelistAndRFAMdict(x):
    Namelist=[]
    RFAMList=[]
    Foundlist=[]
    RFAMdict={}
    for element in x["SeqName"]:
        Namelist.append(element)
    for element2 in x["RFAMMotif"]:
        RFAMList.append(element2)
    for element3 in x["FoundMotif"]:
        Foundlist.append(element3)
    for idx,entry in enumerate(Namelist):
        RFAMdict[entry]=RFAMList[idx]
    return Namelist,RFAMdict,Foundlist

def CreateNamelistAndRFAMdict(x):
    Namelist=[]
    RFAMdict={}
    Foundlist=[]
    for entry in x:
        entry2=entry.split("\t")
        name=entry2[0]
        rfam=entry2[1]
        found=entry2[2]
        Namelist.append(name)
        RFAMdict[name]=list(rfam.split(","))
        Foundlist.append(found)
    return Namelist,RFAMdict,Foundlist