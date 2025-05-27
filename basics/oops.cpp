#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    string dept;
    string qualification;

public:
    string name;
    double salary;

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    string getDept()
    {
        return dept;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Nirbhay Singh";
    t1.changeDept("Computer Science");
    t1.salary = 20987;
    cout << t1.name << " " << endl;
    cout << t1.getDept();
}