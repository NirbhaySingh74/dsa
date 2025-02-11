#include <iostream>
#include <vector>
using namespace std;

// Total time complexity of this brute approach is o(n * m) where n is size of first arr and the m is size of second arr
vector<int> intersection(vector<int> &A, vector<int> &B, int n, int m)
{
    vector<int> ans;
    int vis[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j] && vis[j] == 0)
            {
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }
            if (B[j] > A[i])
                break;
        }
    }
    return ans;
}

// This is optimal approach which takes o(n + m) time complexity and o(n) space complexity
vector<int> optimalIntersectionOfTwoSortedArr(vector<int> &A, vector<int> &B, int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {1, 2, 3, 3, 4, 5, 6};
    vector<int> B = {3, 3, 4, 5};

    vector<int> ans;
    // ans = intersection(A, B, A.size(), B.size());
    ans = optimalIntersectionOfTwoSortedArr(A, B, A.size(), B.size());
    // cout << ans.size() << endl;
    for (int num : ans)
    {
        cout << num << " ";
    }
}