class StudentValidation
{
public:
    int studentValidate(Student student)
    {
        if (student.getname().size() == 0 ||
            student.getname().size() < 5 ||
            student.getname().size() > 10)
        {
            cout << "Invalid Name !" << endl;
        }
        else if (student.getAge() <= 18 || student.getAge() >= 30)
        {
            cout << "Invalid Age !" << endl;
        }
        else if (student.getPhone()[0] != '0' ||
                ((student.getPhone()[1] + student.getPhone()[2]) != ('1' + '1') &&
                (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '0') &&
                (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '2') &&
                (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '5')) ||
                student.getPhone().size() != 11)
        {
            cout << "Invalid Phone-Number !" << endl;
        }
        else if (student.getGPA() >= 4 || student.getGPA() < 0)
        {
            cout << "Invalid GPA !" << endl;
        }
        else
        {
            return 1;
        }
        return -1;
    }
};
class CourseValidation
{
public:
};
class TeacherValidation
{
public:
};
