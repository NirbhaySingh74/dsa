#include <iostream>
using namespace std;
class Teacher
{
    // attributes/ properties
public:
    string name;
    string dept;
    string subject;
    double salary;

    // methods / member Function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Nirbhay";
    t1.subject = "Python";
    t1.dept = "Computer Science";
    t1.salary = 20000;
    cout << t1.name << " " << t1.dept;
    return 0;
}