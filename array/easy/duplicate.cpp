#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 3, 2, 4, 5, 4, 6};
    set<int> set;

    for (int num : arr)
    {
        set.insert(num);
    }

    for (int num : set)
    {
        cout << num << " ";
    }
}