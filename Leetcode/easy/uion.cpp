#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// union of 2 sorted array
vector<int> unionof2sortedarr(vector<int> &nums1, vector<int> &nums2)
{
    set<int> st;
    vector<int> unionarr;
    for (int num : nums1)
    {
        st.insert(num);
    }
    for (int num : nums2)
    {
        st.insert(num);
    }
    int i = 0;
    for (int num : st)
    {
        unionarr[i] = num;
        i++;
    }
    return unionarr;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    vector<int> result = unionof2sortedarr(arr1, arr2);
    // print the result
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}