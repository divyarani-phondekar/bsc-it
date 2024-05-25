list1=[1,2,3,4,4,5,6,7]
list2=[4,5,8,9,64,3,]


def list_matching(list1,list2):
    for i in list1:
        for j in list2:
            if (i == j):
                return"true"

    return "true"

var = list_matching(list1,list2)
print(var)
        
       
