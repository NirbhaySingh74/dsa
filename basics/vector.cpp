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
    v.push_back(50);
    v.push_back(60);

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
    cout << endl;
    // iterate on vector using auto
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // iterate using foreach loop
    for (auto it : v)
    {
        cout << it << " ";
    }

    //    remove element using erase property
    v.erase(v.begin()+1);
    cout << endl
         << "after removing second element" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}