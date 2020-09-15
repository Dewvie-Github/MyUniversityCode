money = float(input("Enter number of withdraw : " )) #Comment ; - ;
B1000 = money//1000
B500 = (money%1000)//500
B100 = (money%1000%500)//100
print("Cash 1000THB : ",B1000,"Banknote")
print("Cash 500THB : ",B500,"Banknote")
print("Cash 100THB : ",B100,"Banknote")
