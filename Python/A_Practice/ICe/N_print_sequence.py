n = 0
while n < 4:
    n = int(input("Enter size(n>=4) : "))

for line in range(n):
    text = ''
    if line == 0 or line == n-1:
        text += '*'
        for i in range(n-2):
            text += ' '
        text += '*'
    else:
        for i in range(n):
            if i == 0 or i == n-1:
                text += '*'
            elif i == line:
                text += '*'
            else:
                text += ' '
    print(text)
        
