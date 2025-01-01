from classroom import Classroom
from person import Student,Teacher
from school import School
from subject import Subject





school1 = School('ABC School','Dhaka')
eight = Classroom('Eight')
nine = Classroom('Nine')
ten = Classroom('Ten')

school1.add_classroom(eight)
school1.add_classroom(nine)
school1.add_classroom(ten)


# Adding Students

rahim = Student('Rahim',eight)
karim = Student('Karim',nine)
fahim = Student('Fahim',ten)
hamim = Student('Hamim',ten)


school1.student_admission(rahim)
school1.student_admission(karim)
school1.student_admission(fahim)
school1.student_admission(hamim)

# Adding Teachers
abul = Teacher('Abul Khan')
babul = Teacher('Babul Khan')
kabul = Teacher('Kabul Khan')



# Adding Subjects

bangla = Subject('Bangla',abul)
physics = Subject('Physics',babul)
chemistry = Subject('Chemistry',kabul)
biology = Subject('Biology',kabul)



eight.add_subjects(bangla)
eight.add_subjects(physics)
eight.add_subjects(chemistry)

nine.add_subjects(biology)
nine.add_subjects(physics)
nine.add_subjects(chemistry)

ten.add_subjects(chemistry)
ten.add_subjects(physics)
ten.add_subjects(bangla)
ten.add_subjects(biology)


eight.take_semester_final_exam()
nine.take_semester_final_exam()
ten.take_semester_final_exam()


print(school1 )