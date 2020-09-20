def grade_char(score):
    gradeList = ['A','B+','B','C+','C','D+','D','F']
    scoreList = [80,75,70,65,60,55,50,0]
    gradeWeight = [4,3.5,3,2.5,2,1.5,1,0]
    for n in range(len(gradeList)):
        if score >= (scoreList[n]):
            return (gradeList[n])

def grade_weight(grade):
    gradeList = ['A','B+','B','C+','C','D+','D','F']
    gradeWeight = [4,3.5,3,2.5,2,1.5,1,0]
    for n in range(len(gradeList)):
        if grade == gradeList[n]:
            return (gradeWeight[n])

print (">> Program Calculation Grade <<")
print('')

Subject = []
Score = []
Grade = []
GradeWeight = []
Credit = []
Point = []


table = ''
subjectCount = int(input("Enter how many subject enroll in: "))

count = 1
for n in range(subjectCount):
    name = input(f'Enter subject name({count}): ')
    score = float(input(f'Enter score({count}): '))
    credit = int(input(f'Enter credit({count}): '))
    grade = grade_char(score)
    weight = grade_weight(grade)
    count += 1

    #add to List
    Subject.append(name)
    Score.append(score)
    Grade.append(grade)
    GradeWeight.append(weight)
    Credit.append(credit)
    Point.append(weight*credit)

sumCredit = sum(Credit)
sumPoint = sum(Point)
gpa = sumPoint/sumCredit

# Table Maker
count = 1
for n in range(len(Subject)):
    table += f'{str(count).center(7)}{" "*3}'
    table += f'{Subject[n]}{" "*(25-len(Subject[n]))}'
    table += f'{str(Score[n]).center(10)}'
    table += f'{Grade[n].center(10)}'
    table += f'{str(Credit[n]).center(10)}'
    table += f'{str(Point[n]).center(10)}'
    table += '\n'
    count += 1

print ('Grade Point'.center(75))
print ('='*75)
print (f'Sub No.   Subject Name{" "*13}{"Mark".center(10)}{"Grade".center(10)}{"Credits".center(10)}{"Points".center(10)}')
print ('='*75)
print (table)
print ('='*75)
print (f'{" "*36}{"Total".center(10)}{" "*10}{str(sumCredit).center(10)}{str(sumPoint).center(10)}')
print ('')
print (f'Grade Point Average(GPA) : {gpa:.2f}')
