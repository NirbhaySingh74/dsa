#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// union of 2 sorted array which takes O(nlogn+mlogm) time complexity
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

// optimal approach usingin two pointer
vector<int> optimalunionoftwosottedarr(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> unionarr;
    int i = 0, j = 0;
    int n = nums1.size(), m = nums2.size();

    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            if (unionarr.empty() || unionarr.back() != nums1[i])
                unionarr.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            if (unionarr.empty() || unionarr.back() != nums2[j])
                unionarr.push_back(nums2[j]);
            j++;
        }
        else
        { // nums1[i] == nums2[j]
            if (unionarr.empty() || unionarr.back() != nums1[i])
                unionarr.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements from nums1
    while (i < n)
    {
        if (unionarr.empty() || unionarr.back() != nums1[i])
            unionarr.push_back(nums1[i]);
        i++;
    }

    // Add remaining elements from nums2
    while (j < m)
    {
        if (unionarr.empty() || unionarr.back() != nums2[j])
            unionarr.push_back(nums2[j]);
        j++;
    }
    return unionarr;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    // vector<int> result = unionof2sortedarr(arr1, arr2);
    vector<int> result = optimalunionoftwosottedarr(arr1, arr2);
    // print the result
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}