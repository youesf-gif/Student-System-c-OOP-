#include <string>
using namespace std;
class BaseEntity
{
protected:
    int id;
    string name;
    int age;
    string phone;

public:
    void setId(int id)
    {
        this->id = id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setsAge(int age)
    {
        this->age = age;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    int getId()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getPhone()
    {
        return phone;
    }
};
class Teacher : public BaseEntity
{
private:
    double Salary;
    int StudentIds[5];

public:
    void setSalary(double Salary)
    {
        this->Salary = Salary;
    }
    void setStudentIds(int StudentIds[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->StudentIds[i] = StudentIds[i];
        }
    }
    double getSalary()
    {
        return Salary;
    }
    int *setStudentIds()
    {
        return StudentIds;
    }
};
class Student : public BaseEntity
{
private:
    double GPA;
    Teacher arr[5];

public:
    void setGPA(double GPA)
    {
        this->GPA = GPA;
    }
    void setTeachers(Teacher arr[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    double getGPA()
    {
        return GPA;
    }
    Teacher *getTeachers()
    {
        return arr;
    }
};