#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    int array[3][4];
    
    // Initialize the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = count++;
        }
    }

    // Print the array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}