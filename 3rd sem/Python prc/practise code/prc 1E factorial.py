num = int(input("enter the no: "))
sum=0
temp=num

while temp>0:
    digit = temp % 10
    cube = digit **3
    sum = sum + cube
    temp //=10
if sum == num:
    print("antrodom")
else:
    print("not arstrodom")



