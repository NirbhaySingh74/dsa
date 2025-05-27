#include <iostream>
using namespace std;

const int MAX = 3;
int arr[MAX][MAX] = {
    {1, 2, 0},
    {4, 5, 6},
    {7, 0, 9}};
int n, m;

void makeRow(int i)
{
    for (int j = 0; j < m; j++)
        if (arr[i][j] != 0)
            arr[i][j] = -1;
}

void makeCol(int j)
{
    for (int i = 0; i < n; i++)
        if (arr[i][j] != 0)
            arr[i][j] = -1;
}

void makeZeroFromMinusOne()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == -1)
                arr[i][j] = 0;
}

void setMatrixZeroBrute()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == 0)
            {
                makeRow(i);
                makeCol(j);
            }
    makeZeroFromMinusOne();
}

int main()
{
    n = m = MAX;
    setMatrixZeroBrute();

    // Print the final matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
