#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void bubble_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int did_swap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                did_swap = 1;
            }
        }

        if (did_swap == 0)
        {
            break;
        }
        cout << "run\n"
             << endl;
    }
}

void insertion_sort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            // int temp = arr[j - 1];
            // arr[j - 1] = arr[j];
            // arr[j] = temp;
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    vector<int> arr = {11, 14, 9, 13, 15, 16};
    // selection_sort(arr);
    // bubble_sort(arr);
    insertion_sort(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
}