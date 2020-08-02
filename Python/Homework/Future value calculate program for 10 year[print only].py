# ใช้ while
print ("Welcome to Future value 10 years calculate program/")
Amount = int(input("Enter amount : "))
Rate = float(input("Enter rate(%) : "))
Rate /= 100  # เปลี่ยน % ไปใ้ช้สำหรับการคำนวณ

Total = Amount * (1 + Rate) **1
print (" 1 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **2
print (" 2 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **3
print (" 3 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **4
print (" 4 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **5
print (" 5 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **6
print (" 6 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **7
print (" 7 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **8
print (" 8 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **9
print (" 9 year =",format(Total, '.2f'))
Total = Amount * (1 + Rate) **10
print ("10 year =",format(Total, '.2f'))
