n = 0
while n %2 != 1:
    n = int(input("Enter size(n%2 = 1) : "))
m = int(input("Enter how many picture : "))

for line in range(n):
    text = ''
    outputText = ''
    count = 0
    if line == 0 or line == n-1:
        for i in range(n):
            text += '*'
    else:
        for i in range(n):
            if i == 0 or i == n-1:
                text += '*'
            elif i == line or i == n-(line+1):
                text += '*'
            else:
                text += ' '
    while count != m:
        outputText += text
        outputText += ' '
        count +=1
    print(outputText)
