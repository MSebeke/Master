from asyncio.subprocess import PIPE
import multiprocessing
import subprocess
import re

def Tuple_To_Dictionary(x,y):
    y[x[0]]=x[1][11:-1]

def ErrConversion(x):
    NoEdges=x[1:-1]
    Times1=re.sub("\t"," ",NoEdges)
    Times2=re.sub("\n","\t", Times1)
    return Times2

def calculate(Data_Input):
    Call=Data_Input[1]
    Length=len(Call)-49
    result=subprocess.Popen(Call,text=True,stdout=PIPE,stderr=PIPE,shell=True)
    out,err=result.communicate()
    #Times=ErrConversion(err) No longer used part of the program, used to make the output string from the time command easier to analyze. Might revisit this later when TIME enviroment variable actually works 
    LogEntry="{Name},{SeqLength},{Time}\n".format(Name=Data_Input[0],SeqLength=Length,Time=err)
    Output=(Data_Input[0],out,LogEntry)
    return Output

def PoolTest(file,Dictionary):
    Tuples=[]
    for entry in Dictionary:
        Tuple=(entry,Dictionary[entry])
        Tuples.append(Tuple)
    FinalDict={}
    pool = multiprocessing.Pool()
    result = pool.imap_unordered(calculate,Tuples)
    pool.close()
    pool.join()
    for entry in result:
        Tuple_To_Dictionary(entry,FinalDict)
        file.write(entry[2])
    return FinalDict

def PoolTestPFUNC(file,Dictionary):
    Tuples=[]
    for entry in Dictionary:
        Tuple=(entry,Dictionary[entry])
        Tuples.append(Tuple)
    FinalDict={}
    pool = multiprocessing.Pool()
    result = pool.imap_unordered(calculate,Tuples)
    pool.close()
    pool.join()
    for entry in result:
        file.write(entry[0])
        file.write("\t")
        file.write(entry[1])
    return FinalDict