#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largest_Element(vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

int largest_ElementInArr(vector<int> &arr)
{
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int second_largest(vector<int> &arr)
{
    int largest = arr[0], secondLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int secondLargestOptimal(vector<int> &arr)
{
    int largest = 1, secondargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondargest = largest;
            largest = arr[i];
        }
    }
    return secondargest;
}

int main()
{
    vector<int> arr = {12, 4, 5, 19, 34, 6, 9};
    // cout << largest_Element(arr);
    // cout << largest_ElementInArr(arr) << " ";
    // cout << second_largest(arr);
    cout<<secondLargestOptimal(arr);
}