print (" >> Program Palindrome Number << ")

Run = True
startNum = 0
lastNum = -1

num = input("Enter integer number: ")
numCheck = int(len(num)/2) + 1

if(len(num)%2 == 0):
    while(Run == True):
        if (num[startNum] == num[lastNum]):
            print(f'Digit {num[startNum]} equal to Digit {num[lastNum]}')
            numCheck -= 1
            if (numCheck == 1):
                print(f'Your enter number {num} is Palindrome Number.')
                Run = False
        else:
            print(f'Digit {num[startNum]} not equal to Digit {num[lastNum]}')
            print(f'Your enter number {num} is not Palindrome Number.')
            Run = False
        startNum += 1
        lastNum -= 1
else:
    while(Run == True):
        if(numCheck == 1):
            print(f'Digit {num[startNum]} has no pair.')
            print(f'Your enter number {num} is not Palindrome Number.')
            Run = False
        elif (num[startNum] == num[lastNum]):
            print(f'Digit {num[startNum]} equal to Digit {num[lastNum]}')
            numCheck -= 1
        elif (num[startNum] != num[lastNum]):
            print(f'Digit {num[startNum]} not equal to Digit {num[lastNum]}')
            print(f'Your enter number {num} is not Palindrome Number.')
            Run = False

        startNum += 1
        lastNum -= 1
        
        
