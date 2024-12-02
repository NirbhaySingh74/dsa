#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.push_back(4);
    ls.push_front(1);
    ls.push_back(10);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}