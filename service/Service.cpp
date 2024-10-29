#include "..\Repository\Repository.cpp"
#include "..\Validation\Validation.cpp"

//////////////////////////// Student - Service ////////////////////////////
// interface StudentService
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
};
// Class StudentServiceImpl
class StudentServiceImpl
{
private:
    StudentRepositoryImpl studentRepository;
    StudentValidation studentValidation;

public:
    int addStudent(Student student)
    {
        if (studentValidation.studentValidate(student)==1)
        {
            return studentRepository.addStudent(student);
        }
        return -1;
    }
};
//////////////////////////// Course - Service ////////////////////////////
// interface CourseService
class CourseService
{
public:
    virtual int addCourse(Course course) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl
{
private:
    CourseRepositoryImpl courseRepository;

public:
    int addCourse(Course course)
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
            return courseRepository.addCourse(course);
        }
        return -1;
    }
};
//////////////////////////// Teacher - Service ////////////////////////////
// interface TeacherService
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};
// Class teacherServiceImpl
class teacherServiceImpl
{
private:
    TeacherRepositoryImpl teacherRepository;

public:
    int addTeacher(Teacher teacher)
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
            cout << "Invalid Salary |";
        }
        else
        {
            return teacherRepository.addTeacher(teacher);
        }
        return -1;
    }
};
