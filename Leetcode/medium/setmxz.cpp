#include <iostream>
using namespace std;

const int MAX = 3;
int arr[MAX][MAX] = {
    {1, 2, 3},
    {4, 0, 6},
    {7, 8, 9}};

void makeRow(int i)
{
    for (int j = 0; j < MAX; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void makeCol(int j)
{
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void setMatrixZero()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (arr[i][j] == 0)
            {
                makeRow(i);
                makeCol(j);
            }
        }
    }

    makeZero();
}

void makeZero()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    // print the matrix
    setMatrixZero();
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
