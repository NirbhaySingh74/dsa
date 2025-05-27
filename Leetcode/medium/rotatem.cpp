#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix)
{
    int ans[3][3];
    int l = 0, n = 3;
    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            ans[j][l] = matrix[i][j];
            l++;
        }
        l = 0;
    }

    // print the answer
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// optimal approach to rotate 90 degree
void optimal_approach(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    // transport the matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse the matrix
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    optimal_approach(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}