#include <iostream>
using namespace std;

// write a recrsive function who print 1

void fn(int count)
{
    if (count > 3)
        return;
    cout << count << " ";
    count++;
    fn(count);
}
int main()
{
    int count = 0;
    fn(count);
}