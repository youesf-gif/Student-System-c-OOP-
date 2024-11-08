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
            cout << "\t\tID \t\tName \t\tAge \t\tPhone-Number \t\tGPA" << endl;
            cout << "\t\t" << studentResult.getId() << "\t\t" << studentResult.getname() << "\t\t" << studentResult.getAge() << "\t\t" << studentResult.getPhone() << "\t\t" << studentResult.getGPA() << endl;
        }
    }
};
//////////////////////////// Course - Controller ////////////////////////////
// interface CourseController
class CourseController
{
private:
    CourseServiceImpl courseService;
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
            cout << "\t\tID \t\tName \t\tHour" << endl;
            cout << "\t\t" << courseResult.getId() << "\t\t" << courseResult.getname() << "\t\t" << courseResult.getHours() << endl;
        }
    }
};
//////////////////////////// Teacher - Controller ////////////////////////////
// interface TeacherController
class TeacherController
{
private:
    teacherServiceImpl teacherService;
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
            cout << "\t\tID \t\t Name \t\tAge \t\tPhone-Number \t\tSalary" << endl;
            cout << "\t\t" << teacherResult.getId() << "\t\t" << teacherResult.getname() << "\t\t" << teacherResult.getAge() << "\t\t" << teacherResult.getPhone() << "\t\t" << teacherResult.getSalary() << endl;
        }
    }
};