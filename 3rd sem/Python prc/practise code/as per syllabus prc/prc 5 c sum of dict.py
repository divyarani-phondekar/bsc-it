def returnsum (mydict):
    list=[]
    for i in mydict:
        list.append(mydict[i])
        final=sum(list)
    return final
dict={1:100,2:200,3:300}
print("sum:",returnsum (dict))
