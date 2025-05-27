#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int find_single_Num(vector<int> &nums)
{
    map<int, int> map;

    for (int num : nums)
    {
        map[num]++;
    }

    // Print the frequency of each element
    // cout << "Element frequencies:\n";
    for (const auto &pair : map)
    {
        // cout << "Element " << pair.first << " occurs " << pair.second << " times.\n";
        if (pair.second == 1)
        {
            return pair.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> num = {2, 1, 1, 3, 4, 3, 4};
    cout << find_single_Num(num);
}