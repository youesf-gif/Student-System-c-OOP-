#include "..\service\Service.cpp"
//////////////////////////// Student - Controller ////////////////////////////
// interface StudentController
class StudentController
{
private:
    StudentService studentService;

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
    CourseService courseService;

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
    TeacherService teacherService;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }
};