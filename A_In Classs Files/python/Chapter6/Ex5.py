#Ex 6_5
def check_grade(score):
    grade = ''
    if score >= 80 and score <= 100:
        grade = 'A'
    elif score >= 75 and score < 80:
        grade = 'B+'
    elif score >= 70 and score < 75:
        grade = 'B'
    elif score >= 65 and score < 70:
        grade = 'C+'
    elif score >= 60 and score < 65:
        grade = 'C'
    elif score >= 55 and score < 60:
        grade = 'D+'
    elif score >= 50 and score < 55:
        grade = 'D'
    elif score >= 0 and score < 50:
        grade = 'F'

    return grade
print("Program calculate grade.")
Run = True
while Run:
    score = int(input("Enter score(-1 to Exit) : "))
    if score >= 0 and score <= 100:
        print(f'Score {score}, get grade : {check_grade(score)}')
    elif score == -1:
        Run = False
    else:
        print(f'{score} is out of range(1-100). Please enter score again')

print ("Exit Program...")
