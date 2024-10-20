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

public:
    void setSalary(double Salary)
    {
        this->Salary = Salary;
    }
    double getSalary()
    {
        return Salary;
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