#include <iostream>
#include <map> // Use only necessary headers
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute frequency of each element
    map<int, int> frequency;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " query numbers:\n";
    while (q--)
    {
        int number;
        cin >> number;
        // Fetch and print frequency
        cout << frequency[number] << endl;
    }

    return 0;
}
