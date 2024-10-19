#include <string>
#include "BaseEntity.cpp"
using namespace std;
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