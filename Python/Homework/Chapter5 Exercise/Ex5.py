print (">> Program Change Number to Text <<")
text = ''
num = input("Enter integer number: ")

for s in num: 
    if(s == '1'):
        text = text + ' One'
    elif(s == '2'):
        text = text + ' Two'
    elif(s == '3'):
        text = text + ' Three'
    elif(s == '4'):
        text = text + ' Four'
    elif(s == '5'):
        text = text + ' Five'
    elif(s == '6'):
        text = text + ' Six'
    elif(s == '7'):
        text = text + ' Seven'
    elif(s == '8'):
        text = text + ' Eight'
    elif(s == '9'):
        text = text + ' Nine'
    elif(s == '0'):
        text = text + ' Zero'
print(f'Number: {num}')
print(f'Text: {text}')
print("Exit Program")
