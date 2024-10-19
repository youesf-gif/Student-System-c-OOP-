#include "BaseEntity.cpp"
#include <string>
using namespace std;
class Teacher : public BaseEntity
{
private:
    double GPA;

public:
    void setGPA(double GPA)
    {
        this->GPA = GPA;
    }
    double getGPA()
    {
        return GPA;
    }
};