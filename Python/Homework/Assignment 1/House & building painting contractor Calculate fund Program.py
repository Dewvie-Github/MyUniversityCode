import math
# Read module #####
print ("Welcome to House & Building paint Calculate fund Program")
print ("Note: for 4 side house")
width = float(input("Enter Width(meter): "))
length = float(input("Enter Length(meter): "))
height = float(input("Enter Height(meter): "))
bucketPrice = float(input("Enter interior paint price: "))

# Calc module #####
area = (width*height)*2 + (length*height)*2

bucket = math.ceil(area / 4)

amount = bucket*bucketPrice

# print module
print ("---------------------------------------------")
print (f'Area of painted: {area} meter')
print (f'A bucket of paint need: ')
print (f'{bucket} bucket = {amount:,.2f} Baht ')
print ("---------------------------------------------")
