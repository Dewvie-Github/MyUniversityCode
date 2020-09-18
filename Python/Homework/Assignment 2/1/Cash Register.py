def paid_discount(cash):
    if cash <= 1000:
        discount = 0
    elif cash <= 5000:
        discount = 0.04
    elif cash <= 10000:
        discount = 0.07
    elif cash <= 20000:
        discount = 0.10
    elif cash > 20000:
        discount = 0.12
    return discount
def member_discount(member):
    if member == True:
        discount = 0.05
    elif member == False:
        discount = 0.00
    return discount
def isMember(status):

    check = True
    while check:
        if status == 'y' or status == 'Y':
            member = True
            break
        elif status == 'n' or status == 'N':
            member = False
            break
        else:
            print("Invalid input. Please enter again.")
            member = input("Are you member y/n : ")
    discount = member_discount(member)
    return discount

price = float(input("Enter all price of product(s) : "))
member = input("Are you member y/n : ")

member = isMember(member)
print('')

price_discount = price * paid_discount(price)
member_discount = price * member

print (f'\tDiscount of Price = {price_discount:,.2f} Baht')
print (f'\tDiscount for Member = {member_discount:,.2f} Baht')
print('')

netPrice = price - (price_discount + member_discount) 
print(f'Net price of product to pay = {netPrice:,.2f}')

pay = float(input("Enter money pay of customer : "))
change = pay-netPrice
print(f'\t Change to customer = {change:,.2f} Baht')
