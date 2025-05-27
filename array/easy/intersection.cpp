#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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
    vector<int> a = {1, 2, 2, 3, 4, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 6, 7};
    find_Intersection(a, b);
    cout << "hello";

    return 0;
}