#include "..\service\Service.cpp"
//////////////////////////// Student - Controller ////////////////////////////
// interface StudentController
class StudentController
{
private:
    StudentServiceImpl studentService;
    Student studentResult;

public:
    int addStudent(Student student)
    {
        return studentService.addStudent(student);
    }
    void showStudentById(int id)
    {
        studentResult = studentService.getStudentById(id);
        if (studentResult.getId() != -1)
        {
            cout << "\t\t id \t\t Name \t\t Age \t\t Phone-Number \t\t GPA" << endl;
            cout << "\t\t" << studentResult.getId() << "\t\t" << studentResult.getname() << "\t\t" << studentResult.getAge() << "\t\t" << studentResult.getGPA() << endl;
        }
    }
};
//////////////////////////// Course - Controller ////////////////////////////
// interface CourseController
class CourseController
{
private:
    CourseRepositoryImpl courseService;
    Course courseResult;

public:
    int addCourse(Course course)
    {
        return courseService.addCourse(course);
    }
    void showCourseById(int id)
    {
        courseResult = courseService.getCourseById(id);
        if (courseResult.getId() != -1)
        {
            cout << "\t\t id \t\t Name \t\t Age" << endl;
            cout << "\t\t" << courseResult.getId() << "\t\t" << courseResult.getname() << "\t\t" << courseResult.getHours() << endl;
        }
    }
};
//////////////////////////// Teacher - Controller ////////////////////////////
// interface TeacherController
class TeacherController
{
private:
    TeacherRepositoryImpl teacherService;
    Teacher teacherResult;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }
    void showTeacherById(int id)
    {
        teacherResult = teacherService.getTeacherById(id);
        if (teacherResult.getId() != -1)
        {
            cout << "\t\t id \t\t Name \t\t Age \t\t Phone-Number \t\t Salary" << endl;
            cout << "\t\t" << teacherResult.getId() << "\t\t" << teacherResult.getname() << "\t\t" << teacherResult.getAge() << "\t\t" << teacherResult.getSalary() << endl;
        }
    }
};