#include "..\Repository\Repository.cpp"
#include "..\Validation\Validation.cpp"

//////////////////////////// Student - Service ////////////////////////////
// interface StudentService
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student getStudentById(int id) = 0;
};
// Class StudentServiceImpl
class StudentServiceImpl
{
private:
    StudentRepositoryImpl studentRepository;
    StudentValidation studentValidation;
    ValidationService validationService;
    Student studentResult;

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
    Student getStudentById(int id)
    {
        studentResult = studentRepository.getStudentById(id);
        if (studentResult.getId() == -1)
        {
            validationService.noExist("Student", id);
        }
        return studentResult;
    }
};
//////////////////////////// Course - Service ////////////////////////////
// interface CourseService
class CourseService
{
public:
    virtual int addCourse(Course course) = 0;
    virtual Course getCourseById(int id) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl
{
private:
    CourseRepositoryImpl courseRepository;
    CourseValidation courseValidation;
    ValidationService validationService;
    Course courseResult;

public:
    int addCourse(Course course)
    {
        if (courseValidation.courseValidate(course) == 1)
        {
            int id = courseRepository.addCourse(course);
            if (id == -1)
            {
                validationService.fullData("Course");
            }
            else
            {
                return id;
            }
        }
        return -1;
    }
    Course getCourseById(int id)
    {
        courseResult = courseRepository.getCourseById(id);
        if (courseResult.getId() == -1)
        {
            validationService.noExist("Course", id);
        }
        return courseResult;
    }
};
//////////////////////////// Teacher - Service ////////////////////////////
// interface TeacherService
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher getTeacherById(int id) = 0;
};
// Class teacherServiceImpl
class teacherServiceImpl
{
private:
    TeacherRepositoryImpl teacherRepository;
    TeacherValidation teacherValidation;
    ValidationService validationService;
    Teacher teacherResult;

public:
    int addTeacher(Teacher teacher)
    {
        if (teacherValidation.teacherValidate(teacher) == 1)
        {
            int id = teacherRepository.addTeacher(teacher);
            if (id == -1)
            {
                validationService.fullData("Teacher");
            }
            else
            {
                return id;
            }
        }
        return -1;
    }
    Teacher getTeacherById(int id)
    {
        teacherResult = teacherRepository.getTeacherById(id);
        if (teacherResult.getId() == -1)
        {
            validationService.noExist("Teacher", id);
        }
        return teacherResult;
    }
};
