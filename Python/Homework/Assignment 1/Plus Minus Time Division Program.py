#Input module
print ('Welcome to + - * / Program')
num1 = float(input("Enter num 1: "))
num2 = float(input("Enter num 2: "))

#Calc module
#behind the = is where the calculate happen
add = (f'{num1:,.2f} + {num2:,.2f} = {num1+num2:,.2f}')
minus = (f'{num1:,.2f} - {num2:,.2f} = {num1-num2:,.2f}')
mult = (f'{num1:,.2f} x {num2:,.2f} = {num1*num2:,.2f}')
divide = (f'{num1:,.2f} ÷ {num2:,.2f} = {num1/num2:,.2f}')

#Print module
print("-------------------------------------------------")
print(add)
print(minus)
print(mult)
print(divide)
print("-------------------------------------------------")
