#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> ans;
    int n = numbers.size();
    int left = 0, right = n - 1, sum;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum = numbers[left] + numbers[right];
        if (sum == target)
        {
            ans.push_back(left + 1);
            ans.push_back(right + 1);
            break;
        }
        else if (sum > target)
        {
            right = right - 1;
        }
        else
        {
            left = left + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = twoSum(numbers, target);

    for (int num : ans)
    {
        cout << num << " ";
    }
}