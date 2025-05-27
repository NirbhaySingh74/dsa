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

void find_Intersection(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                ans.push_back(a[j]);
                b.erase(a.begin() + j);
                break;
            }
        }
    }

    for (int num : ans)
    {
        cout << num << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 3, 5, 6, 6, 7};
    // find_union(arr1, arr2);
    find_Intersection(arr1, arr2);
}