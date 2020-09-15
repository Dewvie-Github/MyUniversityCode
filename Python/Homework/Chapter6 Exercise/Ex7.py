#Ex 6_7
def print_string(text):
    if len(text) > 0:
        print(text)
        print_string(text[:len(text)-1])

message = input("Enter string : ")
print_string(message)
