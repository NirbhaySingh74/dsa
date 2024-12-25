#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void find_union(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;
    for (int num : arr1)
    {

        st.insert(num); // Insert num
    }

    for (int num : arr2)
    {

        st.insert(num); // Insert num
    }

    for (auto it : st)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5, 4, 22, 3, 6, 7, 8, 5};
    vector<int> arr2 = {11, 13, 4, 15, 7, 8, 9, 12};
    find_union(arr1, arr2);
}