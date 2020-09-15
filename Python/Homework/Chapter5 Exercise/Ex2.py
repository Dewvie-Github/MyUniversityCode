# Ex2
print(">> Program Find Maximum Value <<")
num = int(input("Enter number of value (3-10): "))
numCount = 1
numMax = 0
enterNumber = ''  

if (num < 3):
    num = 3
elif (num > 10):
    num = 10

while num!=0:
    inputNum = int(input(f'Enter num value #{numCount}: '))
    if (inputNum > numMax):
        numMax = inputNum

    if (numCount == 1):
        enterNumber = enterNumber + str(inputNum)
    else:
        enterNumber = enterNumber + ' ,' + str(inputNum)

    num = num - 1
    numCount = numCount + 1
print (f'Your enter number: {enterNumber}')
print (f'Maximum Value number is {numMax}')
