#Type last 4 integer number line by line Program

Number = int(input("Enter integer number : "))
#Calculation
Number = Number%10000 #for choose only last 4 number.
First = Number//1000
Second = (Number%1000)//100
Third = (Number%1000%100)//10
Fourth = (Number%1000%100%10)//1
#Text array
msg = str(First) + "\n" + str(Second) +"\n" + str(Third) + "\n" + str(Fourth)
#OUTPUT
print(msg)
