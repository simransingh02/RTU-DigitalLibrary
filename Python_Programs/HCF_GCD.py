#take two number's from user
num1=int(input("Enter  1st number: "))
num2=int(input("Enter  2nd number: "))

if num1>num2:   #find the lowest value
    lower=num2
else:
    lower=num1

for i in range(2,lower): #In each iteration, we check if our number perfectly divides both the input numbers. If so, we store the number as H.C.F. At the completion of the loop, we end up with the largest number that perfectly divides both the numbers.
    if num1 % i == 0 and num2 % i == 0:
        hcd=i
print(f"The Highest commmon factor for {num1} and {num2} is ",hcd)
