#include <iostream>
#include<vector>
using namespace std;

// Declare global variables
const int MAX = 3;
int arr[MAX][MAX];
int n, m;

// Function to mark the entire row with -1
void makeRow(int i)
{
    for (int j = 0; j < m; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

// Function to mark the entire column with -1
void makeCol(int j)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

// Function to convert -1 to 0
void makeZeroFromMinusOne()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

// Function to set matrix zero
void setMatrixZeroBrute()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                makeRow(i); // Mark the entire row
                makeCol(j); // Mark the entire column
            }
        }
    }
    makeZeroFromMinusOne(); // Convert -1 to 0
}

// Better Approach taking O(n×m)+O(n×m)=O(n×m)
void setZeroMatrix()
{
    int col[m] = {0};
    int row[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[i] = 1;
            }
        }
    }

    // make zero row and col
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    // Initialize global variables
    n = 3, m = 3;
    int temp[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    // Copy the local array to the global array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }

    // Call the function to set matrix zero
    // setMatrixZeroBrute();
    setZeroMatrix();

    // Print the modified array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}