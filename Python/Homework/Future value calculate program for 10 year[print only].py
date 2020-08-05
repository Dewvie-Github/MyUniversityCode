print ("Welcome to Future value 10 years calculate program")
Amount = int(input("Enter amount : "))
Rate = float(input("Enter rate(%) : "))
Rate /= 100  # เปลี่ยน % ไปใช้สำหรับการคำนวณ

Total = Amount * (1 + Rate) **1
print (f'  1 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **2
print (f'  2 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **3
print (f'  3 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **4
print (f'  4 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **5
print (f'  5 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **6
print (f'  6 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **7
print (f'  7 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **8
print (f'  8 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **9
print (f'  9 year = {Total:,.2f}')
Total = Amount * (1 + Rate) **10
print (f' 10 year = {Total:,.2f}')
