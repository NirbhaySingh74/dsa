#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largest_Element(vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {12, 4, 5, 19, 34, 6, 9};
    cout << largest_Element(arr);
}