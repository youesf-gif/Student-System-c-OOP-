#include "..\service\Service.cpp"
//////////////////////////// Student - Controller ////////////////////////////
// interface StudentController
class StudentController
{
private:
    StudentServiceImpl studentService;

public:
    int addStudent(Student student)
    {
        return studentService.addStudent(student);
    }
};
//////////////////////////// Course - Controller ////////////////////////////
// interface CourseController
class CourseController
{
private:
    CourseRepositoryImpl courseService;

public:
    int addCourse(Course course)
    {
        return courseService.addCourse(course);
    }
};
//////////////////////////// Teacher - Controller ////////////////////////////
// interface TeacherController
class TeacherController
{
private:
    TeacherRepositoryImpl teacherService;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }
};