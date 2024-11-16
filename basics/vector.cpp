#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declare a vector
    vector<int> v;

    // Add Elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // Display Element
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // remove the last element
    v.pop_back();
    cout << endl
         << "After remove" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}