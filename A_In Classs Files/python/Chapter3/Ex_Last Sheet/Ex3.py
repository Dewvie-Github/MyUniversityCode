

Amount = float(input("Enter amount : "))
Rate = float(input("Enter rate : "))
Year = float(input("Enter year : "))

Rate /= 100
FV = Amount * ( 1 + Rate) ** Year

print ("Future value = ",round(FV, 2))
