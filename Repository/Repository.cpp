#include <bits/stdc++.h>
#include "..\model\Models.cpp"
using namespace std;
// static Data
class Data
{
public:
    static Student students[25];
    static int indexStudent;
    static int idStudent;
    static Course courses[25];
    static int indexCourse;
    static int idCourse;
    static Teacher teachers[25];
    static int indexTeacher;
    static int idTeacher;
};
// init static Data
Student Data::students[25];
int Data::indexStudent = 0;
int Data::idStudent = 1;
Course Data::courses[25];
int Data::indexCourse = 0;
int Data::idCourse = 1;
Teacher Data::teachers[25];
int Data::indexTeacher = 0;
int Data::idTeacher = 1;

///////////////////////////////// Student /////////////////////////////////
// interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student) = 0;
};
// Class StudentRepositoryImpl
class StudentRepositoryImpl : public StudentRepository
{
private:
    Data data;

public:
    int addStudent(Student student)
    {
        if (data.indexStudent == 25)
        {
            return -1;
        }
        else
        {
            student.setId(data.idStudent++);
            data.students[data.indexStudent++] = student;
        }
        return student.getId();
    }
};
///////////////////////////////// Course /////////////////////////////////
// interface CourseRepository
class CourseRepository
{
public:
    virtual int addCourse(Course course) = 0;
};
// Class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
private:
    Data data;

public:
    int addCourse(Course course)
    {
        if (data.indexCourse == 25)
        {
            cout << "Full Course";
        }
        else
        {
            course.setId(data.idCourse++);
            data.courses[data.indexCourse] = course;
            data.indexCourse++;
        }
        return course.getId();
    }
};
///////////////////////////////// Teacher /////////////////////////////////
// interface TeacherRepository
class TeacherRepository
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};
// Class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
private:
    Data data;

public:
    int addTeacher(Teacher teacher)
    {
        if (data.indexTeacher == 25)
        {
            cout << "Full Teacher";
        }
        else
        {
            teacher.setId(data.idTeacher++);
            data.teachers[data.indexTeacher] = teacher;
            data.indexTeacher++;
        }
        return teacher.getId();
    }
};
