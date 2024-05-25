
num=int(input("Enter a number:"))
r=0
rev=0
n=num
while num!=0:
    r = num % 10
    rev = rev * 10 + r
    num=int(num/10)
    
if(n==rev):
    print("It is palindrome")
else:
    print("It is not palindrome")

