# Input module
print ("Welcome to Electricity Current(I) Finder Program")
E = float(input("Enter E: "))
R1 = float(input("Enter R1: "))
R2 = float(input("Enter R2: "))
R3 = float(input("Enter R3: "))


# Calc module (Calculate module)
R = R1+R2+R3
I = E/R


# Print module
# variable in {}
print ("----------------------------------------------------------------")
print (f"                           R1 = {R1:.2f}Ω")
print ("       ____________________NN___________________")
print ("      |\t\t\t\t\t\t|")
print ("      |\t\t\t\t\t\t| ")
print (f"      |\t\t\tR = {R:.2f}\t\tNN R2 = {R2:.2f}Ω       ") 
print (f"     ___ E={E:.2f}V\tI = {I:.2f}A\t\t|")
print ("      _\t\t\t\t\t\t|")
print ("      |\t\t\t\t\t\t|")
print ("      |____________________NN___________________")
print (f"                          R3 = {R3:.2f}Ω")
print ("NN mean Resistor\n")
print (f'I = {I:.2f} A')
print (f'R = {R:.2f} Ω')
print ("----------------------------------------------------------------")
