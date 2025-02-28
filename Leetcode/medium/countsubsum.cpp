#include <iostream>
#include <vector>
using namespace std;

int countSubArrGivenSum(vector<int> &nums, int k)
{ 
    int count = 0, n = nums.size(), sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            // cout << nums[j] << " ";`
            sum = sum + nums[j];
            if(sum == k)
            count++;
        }
        
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 2,3};
    cout<<countSubArrGivenSum(nums, 3);
    return 0;
}