# ใช้ for 
Amount = int(input("Enter amount : "))
Rate = float(input("Enter rate : "))
Years = int(input("Enter year : "))
Rate /= 100
for YearCount in range(1,Years+1):
    FV = Amount * (1 + Rate) ** YearCount
    print (YearCount,"Year =",FV,"Baht")
