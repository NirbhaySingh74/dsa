#include <iostream>
using namespace std;

// print Name 5 Times
void printName(int count)
{
    if (count > 5)
        return;
    cout << "Nirbhay" << endl;
    printName(count + 1);
}
int main()
{
    printName(1);
}