# Ex 6_3
def display_triangle(num, ch):

    for n in range(num+1):
        message = ''
        for m in range(n):
            message += ch
        print(message)

print("Program display triangle.")
num = int(input("Enter num line: "))
ch = input("Enter character: ")
display_triangle(num, ch)
