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
    cout << "5 - Exit" << endl;
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
        cout << "Show Student" << endl;
        break;
    case 4:
        cout << "Edit Student" << endl;
        break;
    case 5:
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
        cout << "Show Course" << endl;
        break;
    case 4:
        cout << "Edit Course" << endl;
        break;
    case 5:
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
        cout << "Show Teacher" << endl;
        break;
    case 4:
        cout << "Edit Teacher" << endl;
        break;
    case 5:
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
            int process;
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