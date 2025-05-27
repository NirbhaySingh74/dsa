#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> ans;
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> result = twoSum(numbers, 26);

    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}