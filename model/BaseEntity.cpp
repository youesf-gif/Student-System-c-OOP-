#include <iostream>
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