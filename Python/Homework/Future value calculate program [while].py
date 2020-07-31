# ใช้ while
Amount = int(input("Enter amount : "))
Rate = float(input("Enter rate : "))
Years = int(input("Enter year : "))
Rate /= 100
i = 1
while i <= Years:           #i คือจำนวนปีที่เพิ่มขึ้นเรื่อยๆ
    FV = Amount * (1 + Rate) ** i
    print(i," Years =",round(FV,2))
    if i < Years:
        i += 1
    if i == Years:
        FV = Amount * (1 + Rate) ** i
        print(i,"Years =",round(FV,2))
        break
