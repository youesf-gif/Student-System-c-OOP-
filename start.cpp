#include <iostream>
#include "Controller/Controller.cpp"
using namespace std;
void displaySystem()
{
    cout << "\t\t**************** Student Management System ****************" << endl;
    cout << "Please Enter Process You To Do" << endl;
    cout << "1 - About Students" << "\t\t" << "2 - About Courses" << endl;
    cout << "3 - About Teachers" << "\t\t" << "4 - Exit" << endl;
}
void showList(string value)
{
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
    int id = studentController.addStudent(student);
    cout << "Success Add ID [" << id << "]" << endl;
}
// void addCourse()
// {
//     cout << "Please Enter Student Data:" << endl;
//     Course course;
//     cout << "Enter Course Name: ";
//     string name;
//     cin >> name;
//     course.setname(name);
//     cout << "Enter Course Hour: ";
//     int hours;
//     cin >> hours;
//     course.hours(hours);
//     CourseController courseController;
//     int id = courseController.addCourse(course);
//     cout << "Success Add ID [" << id << "]" << endl;
// }
int process;
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
            break;
        case 2:
            showList("Course");
            cin >> process;
            switch (process)
            {
            case 1:
                // addCourse();
                cout << "Add Course" << endl;
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
                break;
            }
            break;
        case 3:
            showList("Teacher");
            cin >> process;
            switch (process)
            {
            case 1:
                // addTeacher();
                cout << "Add Teacher" << endl;
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