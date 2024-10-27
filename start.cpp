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
int main()
{

    int process;
    bool flag = 1;
    while (flag)
    {
        displaySystem();
        cin >> process;
        switch (process)
        {
        case 1:
            showList("Student");
            int processStudent;
            cin >> processStudent;
            if (processStudent == 1)
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
                studentController.addStudent(student);
            }
            break;
        case 2:
            showList("Course");
            break;
        case 3:
            showList("Teacher");
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