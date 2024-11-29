#include <iostream>
#include <vector>
using namespace std;

void remove(vector<int> &arr)
{
    
}

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(30);

    for (int num : arr)
    {
        cout << num << " ";
    }
}