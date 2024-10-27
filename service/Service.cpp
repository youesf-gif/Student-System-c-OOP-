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
    StudentRepository studentRepository;
public:
    int addStudent(Student student)
    {
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
    CourseRepository courseRepository;

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
    TeacherRepository teacherRepository;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherRepository.addTeacher(teacher);
    }
};
