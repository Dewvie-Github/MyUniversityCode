import random
rNum = random.randint(1,99)
Run = True

print(">> Guess The Number!! <<")
while(Run == True):
    num = int(input('Enter the number you guess: ')) 
    if(num > rNum):
        print(f'{num} is too much!')
    elif(num < rNum):
        print(f'{num} is too little!')
    else:
        print(f'Correct!!, The number I random is: {rNum}')
        Run = False
