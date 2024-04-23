# a=int(input("number"))
# b=1
# for i in range(1,a+1):
#     b=b*i
# print(b)
class School:
    def __init__(self,chairman,principal):
        self.chairman=chairman
        self.principal=principal

class Class(School):
    def __init__(self,chairman,principal,class_name,class_teacher):
        self.class_name=class_name
        self.class_teacher=class_teacher

        super().__init__(chairman,principal) 
class Student(Class):
    def __init__(self,chairman,principal,class_name,class_teacher,Student_name,student_roll):
        self.student_name=Student_name
        self.studnet_roll=student_roll
        super().__init__(chairman,principal,class_name,class_teacher)
        
        
        
 
s=Student('i','d','1','df','dfd','89')

        
        
