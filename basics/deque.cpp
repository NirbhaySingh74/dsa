#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);

    dq.pop_back();
    dq.pop_front();

    for (auto it : dq)
    {
        cout << it << " ";
    }
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}