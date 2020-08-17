# ใช้ while
Amount = int(input("Enter amount : "))
Rate = float(input("Enter rate : "))
Years = int(input("Enter year : "))
Rate /= 100
payCount = int(input("How many time you pay/years: "))
i = 1
payCount = payCount/(12*Years)
while i <= Years:           #i คือจำนวนปีที่เพิ่มขึ้นเรื่อยๆ
    FV = Amount * ((1 + Rate/payCount) ** (payCount*i))
    print(i," Years =",f' {FV:,.2f} Baht')
    if i < Years:
        i += 1
    if i == Years:
        FV = Amount * ((1 + Rate/payCount) ** (payCount*i))
        print(i,"Years =",f' {FV:,.2f} Baht')
        break
