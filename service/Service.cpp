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
    ValidationService validationService;

public:
    int addStudent(Student student)
    {
        if (studentValidation.studentValidate(student) == 1)
        {
            int id = studentRepository.addStudent(student);
            if (id == -1)
            {
                validationService.fullData("Stdent");
            }
            else
            {
                return id;
            }
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
    CourseValidation courseValidation;

public:
    int addCourse(Course course)
    {
        if (courseValidation.courseValidate(course) == 1)
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
    TeacherValidation teacherValidation;

public:
    int addTeacher(Teacher teacher)
    {
        if (teacherValidation.teacherValidate(teacher) == 1)
        {
            return teacherRepository.addTeacher(teacher);
        }
        return -1;
    }
};
