num=int(input("Enter a no: "))
r=0
rev=0
while num!=0:
    r=num%10
    rev=rev*10+r
    num=int(num/10)
print("reverse no is: ",rev)
