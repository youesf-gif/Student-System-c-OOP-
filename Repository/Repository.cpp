#include <bits/stdc++.h>
#include "..\model\Models.cpp"
using namespace std;
///////////////////////////////// Student /////////////////////////////////
// interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student);
};
// StudentRepositoryImpl
class StudentRepositoryImpl : StudentRepository
{
private:
    Student students[25];
    int index = 0;

public:
    int addStudent(Student student) override
    {
        if (index == 25)
        {
            cout << "Full Student";
        }
        else
        {
            students[index] = student;
            index++;
        }
    }
};
///////////////////////////////// Teacher /////////////////////////////////
// interface TeacherRepository
class TeacherRepository
{
private:
public:
};
// TeacherRepositoryImpl
class TeacherRepositoryImpl
{
};
