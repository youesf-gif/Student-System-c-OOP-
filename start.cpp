#include <iostream>
using namespace std;
#define endl "\n"
int main()
{
    int process;
    bool flag = 1;
    while (flag)
    {
        cout << "\t\t**************** Student Management System ****************" << endl;
        cout << "1 - Add Student" << "\t\t" << "2 - Remove Student" << endl;
        cout << "3 - Edit Student" << "\t" << "4 - Show Student" << endl;
        cout << "5 - Exit" << endl;
        cin >> process;
        switch (process)
        {
        case 1:
            cout << "Process Add" << endl;
            break;
        case 2:
            cout << "Process Remove" << endl;
            break;
        case 3:
            cout << "Process Edit" << endl;
            break;
        case 4:
            cout << "Process Show" << endl;
            break;
        case 5:
            cout << "Process Exit" << endl;
            flag = 0;
            break;
        default:
            cout << "Invalid Choose" << endl;
            break;
        }
    }
}