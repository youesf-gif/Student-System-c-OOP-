#include <bits/stdc++.h>
using namespace std;
// create Model Share Data
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
// create Model Base Entity
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
// create Model Teacher
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
        for (int i = 0; i < (sizeof(this->StudentIds) / sizeof(StudentIds[0])); i++)
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
// create Model Course
class Course : public ShareData
{
private:
    double hours;
    int CourseIds[5];

public:
    // seterr
    void setHours(double hours)
    {
        this->hours = hours;
    }
    void setCourseIds(int CourseIds[5])
    {
        for (int i = 0; i < (sizeof(this->CourseIds) / sizeof(CourseIds[0])); i++)
        {
            this->CourseIds[i] = CourseIds[i];
        }
    }
    // geterr
    double getHours()
    {
        return hours;
    }
    int *setCourseIds()
    {
        return CourseIds;
    }
};
// create Model Student
class Student : public BaseEntity
{
private:
    double GPA;
    Teacher teachers[5];
    Course courses[5];

public:
    // seterr
    void setGPA(double GPA)
    {
        this->GPA = GPA;
    }
    void setTeachers(Teacher teachers[5])
    {
        for (int i = 0; i < (sizeof(this->teachers) / sizeof(teachers[0])); i++)
        {
            this->teachers[i] = teachers[i];
        }
    }
    void setCourses(Course courses[5])
    {
        for (int i = 0; i < (sizeof(this->courses) / sizeof(courses[0])); i++)
        {
            this->courses[i] = courses[i];
        }
    }
    // geterr
    double getGPA()
    {
        return GPA;
    }
    Teacher *getTeachers()
    {
        return teachers;
    }
};