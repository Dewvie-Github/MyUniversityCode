def grade_char(score):
    if score >= 80 and score <= 100:
        grade = 'A'
    elif score >= 70 and score < 80:
        grade = 'B'
    elif score >= 60 and score < 70:
        grade = 'C'
    elif score >= 50 and score < 60:
        grade = 'D'
    elif score >= 0 and score < 50:
        grade = 'F'
    return grade

def grade_weight(grade):
    if grade == 'A':
        grade_w = 4
    elif grade == 'B':
        grade_w = 3
    elif grade == 'C':
        grade_w = 2
    elif grade == 'D':
        grade_w = 1
    elif grade == 'F':
        grade_w = 0
    return grade_w

#Table Maker

def grade_table(def_table,no_count, subjectCount ,credit = 3):
    no_count = 1
    nameSpace = ''
    #spacebar for subject name
    
        
    while subjectCount > 0:
        name = input(f'Enter subject name({count}) : ')
        score = int(input(f'Enter you score({count}) : '))
        for b in range(1,24 - len(str(name))):
            nameSpace += ' '
        grade = grade_char(score)
        gradeWeight = grade_weight(grade)

        
        def_table += f'   {no_count}    {name}{nameSpace}  {score:.2f}'
        def_table += f'   {grade}        3         {gradeWeight*credit}\n'
        no_count += 1
        subjectCount -= 1
    return def_table
print (">> Program Calculation Grade <<")
print('')
table = ''
count = 1

print_table = ''
subjectCount = int(input("Enter how many subject enroll in: "))

print_table += grade_table(table,count, subjectCount, 3)
count += 1
subjectCount -= 1
    
print ("\t\t\t\t Grade Point\n")
print (" ==============================================================")
print (" Sub No.  Subject Name         Mark   Grade   Credits   Points")
print (" ==============================================================")
print (print_table)
