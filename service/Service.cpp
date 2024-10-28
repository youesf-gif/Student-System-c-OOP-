#include "..\Repository\Repository.cpp"

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

public:
    int addStudent(Student student)
    {
        if (student.getname().size() == 0 || student.getname().size() < 5 || student.getname().size() > 10)
        {
            cout << "Invalid Name !" << endl;
        }
        else if (student.getAge() < 18 && student.getAge() > 30)
        {
            cout << "Invalid Age !" << endl;
        }

        else if (student.getPhone()[0] != '0' ||
                (
                    (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '1') &&
                    (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '0') &&
                    (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '2') &&
                    (student.getPhone()[1] + student.getPhone()[2]) != ('1' + '5')
                )
                ){
            cout << "Invalid Phone-Number !" << endl;
        }

        return studentRepository.addStudent(student);
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
        return courseRepository.addCourse(course);
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
        return teacherRepository.addTeacher(teacher);
    }
};
