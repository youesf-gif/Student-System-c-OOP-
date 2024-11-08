#include <iostream>
#include "Controller/Controller.cpp"
using namespace std;
int process;
int id;
void displaySystem()
{
    cout << "\t\t**************** Management System ****************" << endl;
    cout << "Please Enter Process You To Do" << endl;
    cout << "1 - About Students" << "\t\t" << "2 - About Courses" << endl;
    cout << "3 - About Teachers" << "\t\t" << "4 - Exit" << endl;
}
void showList(string value)
{
    cout << "\t\t**************** " << value << " Management System ****************" << endl;
    cout << "1 - Add " << value << "\t\t" << "2 - Remove " << value << endl;
    cout << "3 - Edit " << value << (value == "Course" ? "\t\t" : "\t") << "4 - Show " << value << endl;
    cout << "5 - Show " << value << " By ID" << "\t" << "6 - Exit" << endl;
}
void addStudent()
{
    cout << "Please Enter Student Data:" << endl;
    Student student;
    cout << "Enter Student Name: ";
    string name;
    cin >> name;
    student.setname(name);
    cout << "Enter Student Age: ";
    int age;
    cin >> age;
    student.setAge(age);
    cout << "Enter Student Phone-Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    student.setPhone(phoneNumber);
    cout << "Enter Student GPA: ";
    double gpa;
    cin >> gpa;
    student.setGPA(gpa);
    StudentController studentController;
    id = studentController.addStudent(student);
    if (id != -1)
    {
        cout << "Success Add Student ID [" << id << "]" << endl;
    }
}
void addCourse()
{
    cout << "Please Enter Course Data:" << endl;
    Course course;
    cout << "Enter Course Name: ";
    string name;
    cin >> name;
    course.setname(name);
    cout << "Enter Course Hour: ";
    double hours;
    cin >> hours;
    course.setHours(hours);
    CourseController courseController;
    id = courseController.addCourse(course);
    if (id != -1)
    {
        cout << "Success Add Course ID [" << id << "]" << endl;
    }
}
void addTeacher()
{
    cout << "Please Enter Teacher Data:" << endl;
    Teacher teacher;
    cout << "Enter Course Name: ";
    string name;
    cin >> name;
    teacher.setname(name);
    cout << "Enter Teacher Age: ";
    int age;
    cin >> age;
    teacher.setAge(age);
    cout << "Enter Teacher Phone-Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    teacher.setPhone(phoneNumber);
    cout << "Enter Course Salary: ";
    double salary;
    cin >> salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
    id = teacherController.addTeacher(teacher);
    if (id != -1)
    {
        cout << "Success Add Teacher ID [" << id << "]" << endl;
    }
}
void showStudentById()
{
    cout << "Enter Student ID: ";
    cin >> id;
    StudentController studentController;
    studentController.showStudentById(id);
}
void showCoursetById()
{
    cout << "Enter Course ID: ";
    cin >> id;
    CourseController courseController;
    courseController.showCourseById(id);
}
void showTeacherById()
{
    cout << "Enter Teacher ID: ";
    cin >> id;
    TeacherController teacherController;
    teacherController.showTeacherById(id);
}
void editStudent()
{
    cout << "Please Enter Student Data:" << endl;
    Student student;
    cout << "Enter Student ID: ";
    cin >> id;
    student.setId(id);
    cout << "Enter Student Name: ";
    string name;
    cin >> name;
    student.setname(name);
    cout << "Enter Student Age: ";
    int age;
    cin >> age;
    student.setAge(age);
    cout << "Enter Student Phone-Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    student.setPhone(phoneNumber);
    cout << "Enter Student GPA: ";
    double gpa;
    cin >> gpa;
    student.setGPA(gpa);
    StudentController studentController;
    studentController.updateStudent(student);
}
void editCourse()
{
    cout << "Please Enter Course Data:" << endl;
    Course course;
    cout << "Enter Course ID: ";
    cin >> id;
    course.setId(id);
    cout << "Enter Course Name: ";
    string name;
    cin >> name;
    course.setname(name);
    cout << "Enter Course Hour: ";
    double hours;
    cin >> hours;
    course.setHours(hours);
    CourseController courseController;
}
void editTeacher()
{
    cout << "Please Enter Teacher Data:" << endl;
    Teacher teacher;
    cout << "Enter Course ID: ";
    cin >> id;
    teacher.setId(id);
    cout << "Enter Course Name: ";
    string name;
    cin >> name;
    teacher.setname(name);
    cout << "Enter Teacher Age: ";
    int age;
    cin >> age;
    teacher.setAge(age);
    cout << "Enter Teacher Phone-Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    teacher.setPhone(phoneNumber);
    cout << "Enter Course Salary: ";
    double salary;
    cin >> salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
}
void switchStudent()
{
    switch (process)
    {
    case 1:
        addStudent();
        break;
    case 2:
        cout << "Remove Student" << endl;
        break;
    case 3:
    editStudent();
        break;
    case 4:
        cout << "Show Student" << endl;
        break;
    case 5:
        showStudentById();
        break;
    case 6:
        break;
    default:
        cout << "Invalid Choose" << endl;
        break;
    }
}
void switchCourse()
{
    switch (process)
    {
    case 1:
        addCourse();
        break;
    case 2:
        cout << "Remove Course" << endl;
        break;
    case 3:
        editCourse();
        break;
    case 4:
        cout << "Show Course" << endl;
        break;
    case 5:
        showCoursetById();
        break;
    case 6:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}
void switchTeacher()
{
    switch (process)
    {
    case 1:
        addTeacher();
        break;
    case 2:
        cout << "Remove Teacher" << endl;
        break;
    case 3:
        editTeacher();
        break;
    case 4:
        cout << "Show Teacher" << endl;
        break;
    case 5:
        showTeacherById();
        break;
    case 6:
        break;
    default:
        cout << "Invalid Choose" << endl;
        break;
    }
}
int main()
{

    bool flag = 1;
    while (flag)
    {
        displaySystem();
        cin >> process;
        switch (process)
        {
        case 1:
            showList("Student");
            cin >> process;
            switchStudent();
            break;
        case 2:
            showList("Course");
            cin >> process;
            switchCourse();
            break;
        case 3:
            showList("Teacher");
            cin >> process;
            switchTeacher();
            break;
        case 4:
            cout << "Process Exit" << endl;
            flag = 0;
            break;
        default:
            cout << "Invalid Choose" << endl;
            break;
        }
    }
}