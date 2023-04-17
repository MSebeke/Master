from Bio import AlignIO
import re
from collections import Counter

molist=["RM00003","RM00008","RM00010","RM00011","RM00018","RM00019","RM00024","RM00029"]

def A2S(x):
    x=str(x)
    y=str((re.sub("-*","",x)))
    return y

def Tlist2(x):
    namelist=[]
    rowlist=[]
    ConDict={}
    Fdict={}
    with open(x,"r") as file:
        c=file.readlines()
        for row in c:
            row = row.split()
            if row[0] in molist:
                rowlist.append(row)
                name=row[2]+"/"+row[3]+"-"+row[4]
                namelist.append(name)
    CList=Counter(namelist)
    for element in CList:
        if CList[element] == 1:
            c=namelist.index(element)
            ConDict[element]=c
        if CList[element] != 1:
            c=[x for x,e in enumerate(namelist) if e == element]
            ConDict[element]=c
    for entry in ConDict:
        if type(ConDict[entry]) == int:
            temp=rowlist[ConDict[entry]][0]
            templist=[]
            templist.append(temp)
            Fdict[entry]=templist
        if type(ConDict[entry]) == list:
            tlist=[]
            for entry2 in ConDict[entry]:
                tlist.append(rowlist[entry2][0])
            Fdict[entry]=tlist
    return Fdict

def Alignment(x,y,z):
    Seqdict={}
    with open (y,"r",encoding=z) as file: #Add encoding = "latin-1" here when transferring to ubuntu server
        format ="stockholm"
        for alignment in AlignIO.parse(file,format):
            for record in alignment:
                if record.description in x.keys():
                    Seqdict[record.description]=A2S(record.seq)
    file.close
    return Seqdict

def CheckSequences(x):
    DeletionList=[]
    for entry in x:
        SeqSet=set(x[entry])
        try:
            SeqSet.remove("A")
        except:
            pass
        try:
            SeqSet.remove("U")
        except:
            pass
        try:
            SeqSet.remove("C")
        except:
            pass
        try:
            SeqSet.remove("G")
        except:
            pass
        if len(SeqSet) != 0:
            DeletionList.append(entry)
    for entry in DeletionList:
        del x[entry]
    return x

def MakeCMDict(x,Out_exePATH):
    CMDict={}
    for entry in x:
        command=Out_exePATH+x[entry]
        CMDict[entry]=command
    return CMDict

def LF(x,y,z):
    dellist=[]
    for entry in x:
        if len(x[entry]) not in range(y,z):
            dellist.append(entry)
    for entry in dellist:
        del x[entry]
    return x  

def MakeOut(x,Fdict,Out_txtPATH,TempOut_PATH):
    for entry in x:
        d=x[entry]
        z=re.split("\n",d)
        for res in z:
            res2=re.split(",",res)
            if len(res2) == 3:
                for idx,part in enumerate(res2):
                    if idx == 0:
                        u=re.sub("\W","",part)
                        if u=="":
                            u="X"
                    if idx == 1:
                        t=part[1:-3]
                    if idx == 2:
                        s=part[1:-2]
                n=Fdict[entry]
                n=",".join(n)
                with open(Out_txtPATH,"a") as file:
                    file.write(entry+"\t"+n+"\t"+u+"\t"+t+"\t"+s+"\n")
                with open(TempOut_PATH,"a") as file:
                    file.write(entry+"\t"+n+"\t"+u+"\t"+t+"\t"+s+"\n")              
    with open(Out_txtPATH,"a") as file:
        file.write("_______________________________________________________________\n")

def MakeOut2(x,Out_txtPATH):
    with open(Out_txtPATH,"a") as file:
        for entry in x:
            file.write(entry)
            file.write("\n")