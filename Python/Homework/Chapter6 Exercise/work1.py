def find_max(num):
    numMax = 0
    for n in num:
        if int(n) > numMax:
            numMax = int(n)
    return numMax

Run = True

while Run == True:
    num = input("Enter integer number(0-Exit): ")
    if num!= '0':
        numMax = find_max(num)
        print(f'Maximum Digit of integer {num} = {numMax}')
    elif num == '0':
        Run = False
        print("Exit Program")
