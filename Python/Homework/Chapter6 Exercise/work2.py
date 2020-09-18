def check_palindrome(num):
    count = len(num)
    nStart = 0
    nLast = -1
    Run = True
    
    if count %2 == 0:
        count = count / 2
        while Run:
            if count == 0:
                print(f'{num} is Palindrome number') 
                Run = False
            elif num[nStart] == num[nLast]:
                print(f'{num[nStart]} is equal to {num[nLast]}')

            elif num[nStart] != num[nLast]:
                print(f'{num[nStart]} is not equal to {num[nLast]}')
                print(f'{num} is not Palindrome number') 
                Run = False
            nStart += 1
            nLast -= 1
            count -= 1
            
    if count %2 != 0:
        nCount = len(num)//2
        while Run == True:
            if nCount == 0:
                print(f'{num[nStart]} don\'t have number to check')
                print(f'{num} is not Palindrome number')
                Run = False
            else:
                if num[nStart] == num[nLast]:
                    print(f'{num[nStart]} is equal to {num[nLast]}')
                elif num[nStart] != num[nLast]:
                    print(f'{num[nStart]} is not equal to {num[nLast]}')
                    print(f'{num} is not Palindrome number')
                    Run = False
            nCount -= 1
            nStart += 1
            nLast -= 1
print(">> Palindrome check Program <<")
num = input("Enter number : ")
check_palindrome(num)

