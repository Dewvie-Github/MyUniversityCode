import random

Run = True
ans = random.randint(1,99)
print (ans)
def ans_check(num):
    if (num > ans):
        print(f'num {num} is too much!')
        return True
    elif (num < ans):
        print(f'num {num} is too little!')
        return True
    else:
        print('correct!')
        return False
while Run:
    num = int(input("Enter num : "))
    Run = ans_check(num)
