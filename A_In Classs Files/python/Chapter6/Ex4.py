#Ex 6_4
import math
Run = True
def select_menu():
    print ("Menu")
    print ("1. circle 2. rectangle 3. triangle")
    menu = input("Please choose : ")
    return menu

def cal_circle(radius):
    area = math.pi*radius**2
    return area

def cal_rectangle(width, height):
    area = width * height
    return area
def cal_triangle(base,height):
    area = 0.5 * base * height
    return area
def cal_exit():
    return False
while Run == True:
    print("Program calculate area.")
    menu = select_menu()
    if menu == '1':
        radius = int(input("Enter radius: "))
        print(f'Area of circle = {cal_circle(radius)}')
    elif menu == '2':
        width = int(input("Enter width: "))
        height = int(input("Enter height: "))
        print (f'Area of rectangle = {cal_rectangle(width, height)}')
    elif menu == '3':
        base = int(input("Enter base: "))
        height = int(input("Enter height: "))
        print (f'Area of triangle = {cal_triangle(base, height)}')
    elif menu == '4':
        Run = cal_exit()
        print ("Exit Program")
    else:
        print (f'{menu} is not in menu! Please enter menu again')
