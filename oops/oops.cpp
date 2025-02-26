#include <iostream>
using namespace std;
class Teacher
{
private:
    double salary;
    // attributes/ properties
public:
    string name;
    string dept;
    string subject;

    // methods / member Function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter used to set private values
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter used to get private values
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Nirbhay";
    t1.subject = "Python";
    t1.dept = "Computer Science";
    cout << t1.name << " " << t1.dept<<" ";
    t1.setSalary(20000);
    cout<<t1.getSalary();
    return 0;
}