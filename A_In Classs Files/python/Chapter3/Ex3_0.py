quantity = int(input("Enter product quantity : "))
price = float(input("Enter product price : "))
total = price*quantity
pay = float(input("Enter money : "))
change = pay-total
print("You change is ",change,"baht")
