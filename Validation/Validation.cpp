/********************************* Validation Class *********************************/
// StudentValidation Class
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
// CourseValidation Class
class CourseValidation
{
public:
    int courseValidate(Course course)
    {
        if (course.getname().size() == 0 ||
            course.getname().size() < 4)
        {
            cout << "Invalid Name !" << endl;
        }
        else if (course.getHours() < 5 || course.getHours() > 15)
        {
            cout << "Invalid Hours" << endl;
        }
        else
        {
            return 1;
        }
        return -1;
    }
};
// TeacherValidation Class
class TeacherValidation
{
public:
    int teacherValidate(Teacher teacher)
    {
        if (teacher.getname().size() == 0 ||
            teacher.getname().size() < 5 ||
            teacher.getname().size() > 10)
        {
            cout << "Invalid Name !" << endl;
        }
        else if (teacher.getAge() < 30 || teacher.getAge() > 60)
        {
            cout << "Invalid Age !" << endl;
        }
        else if (teacher.getPhone()[0] != '0' ||
                 ((teacher.getPhone()[1] + teacher.getPhone()[2]) != ('1' + '1') &&
                  (teacher.getPhone()[1] + teacher.getPhone()[2]) != ('1' + '0') &&
                  (teacher.getPhone()[1] + teacher.getPhone()[2]) != ('1' + '2') &&
                  (teacher.getPhone()[1] + teacher.getPhone()[2]) != ('1' + '5')) ||
                 teacher.getPhone().size() != 11)
        {
            cout << "Invalid Phone-Number !" << endl;
        }
        else if (teacher.getSalary() < 5000 || teacher.getSalary() > 15000)
        {
            cout << "Invalid Salary !";
        }
        else
        {
            return 1;
        }
        return -1;
    }
};
class ValidationService
{

public:
    void fullData(string type)
    {
        cout << "Full " << type << " !" << endl;
    }
    void noExist(string type, int id)
    {
        cout << type << " With Id [" << id << "] Not Exist" << endl;
    }
};
