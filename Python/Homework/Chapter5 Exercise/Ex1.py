# Ex1
Run = True
while (Run == True):
    numMax = 0
    num = input("Enter integer number (0-Exit): ")
    if(num != '0' ):
        for n in num:
            if int(n) > numMax:
                numMax = int(n)

        print(f'Maximum digit number = {numMax}')
    else:
        Run = False

print("Exit Program")

