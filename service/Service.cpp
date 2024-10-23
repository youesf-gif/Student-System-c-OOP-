#include "..\Repository\Repository.cpp"

//////////////////////////// Student - Service ////////////////////////////
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
};
class StudentServiceImpl
{
private:
    StudentRepository studentRepository;

public:
    int addStudent(Student student)
    {
        return StudentRepository.addStudent(student);
    }
}
//////////////////////////// Course - Service ////////////////////////////
class CourseService
{
public:
    virtual int addCourse(Course course) = 0;
};
class CourseServiceImpl
{
private:
    CourseRepository courseRepository;

public:
    int addCourse(Course course)
    {
        return CourseRepository.addCourse(course);
    }
}
//////////////////////////// Teacher - Service ////////////////////////////
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};
class teacherServiceImpl
{
private:
    TeacherRepository teacherRepository;

public:
    int addTeacher(Teacher teacher)
    {
        return TeacherRepository.addTeacher(teacher);
    }
}
