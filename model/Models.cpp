#include <string>
using namespace std;
//create Model Share Data
class ShareData
{
private:
    int id;
    string name;

public:
    // seterr
    void setId(int id)
    {
        this->id = id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    // geterr
    int getId()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};
//create Model Base Entity
class BaseEntity : public ShareData
{
private:
    int age;
    string phone;

public:
    // seterr
    void setsAge(int age)
    {
        this->age = age;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    // geterr
    int getAge()
    {
        return age;
    }
    string getPhone()
    {
        return phone;
    }
};
//create Model Teacher
class Teacher : public BaseEntity
{
private:
    double Salary;
    int StudentIds[5];

public:
    // seterr
    void setSalary(double Salary)
    {
        this->Salary = Salary;
    }
    void setStudentIds(int StudentIds[5])
    {
        for (int i = 0; i < (sizeof(StudentIds) / sizeof(StudentIds[0])); i++)
        {
            this->StudentIds[i] = StudentIds[i];
        }
    }
    // geterr
    double getSalary()
    {
        return Salary;
    }
    int *setStudentIds()
    {
        return StudentIds;
    }
};
//create Model Student
class Student : public BaseEntity
{
private:
    double GPA;
    Teacher arr[5];

public:
    // seterr
    void setGPA(double GPA)
    {
        this->GPA = GPA;
    }
    void setTeachers(Teacher arr[5])
    {
        for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
        {
            this->arr[i] = arr[i];
        }
    }
    // geterr
    double getGPA()
    {
        return GPA;
    }
    Teacher *getTeachers()
    {
        return arr;
    }
};
//create Model Course
class Course : public ShareData
{
private:
    double hours;

public:
    // seterr
    void setHours(double hours)
    {
        this->hours = hours;
    }
    // geterr
    double getHours()
    {
        return hours;
    }
};