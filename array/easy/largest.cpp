#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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
    int largest = 1, secondLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int second_smallest(vector<int> &arr)
{
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] > smallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main()
{
    vector<int> arr = {10, 20, 15, 8, 12, 34, 98, 76};
    // cout << largest_Element(arr);
    // cout << largest_ElementInArr(arr) << " ";
    // cout << second_largest(arr);
    cout << secondLargestOptimal(arr) << endl;
    cout << second_smallest(arr);
}