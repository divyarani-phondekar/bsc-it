num= int(input("enter no"))

reverse = 0

while num!=0:
    digit = num % 10
    reverse=reverse * 10 = digit
    num //= 10

print("reserse no is: "reverse)
