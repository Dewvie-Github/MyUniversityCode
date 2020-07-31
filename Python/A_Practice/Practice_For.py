#number = int(input("Enter number line : "))
#for msg in range(1,number+1):
    #print(msg)
'''
name = ["Dew","Few","Aom"]
count = int(input("Enter count : "))
print (name[count])
'''
fruits = ["apple","banana","cherry","durian","elderberry"]
for x in fruits:
    if x == "banana":
        print (x)
        continue
    elif x == "cherry":
        print (x)
    elif x == "durian":
        print (x)
        break
print (x)
