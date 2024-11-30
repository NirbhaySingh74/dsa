#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> map;
    map["Nirbhay"] = 1;
    map["kunal"] = 2;
    map["Deepak"] = 3;
    map["John"] = 4;
        for (auto it : map)
    {
        cout << "key - " << it.first << ", values - " << it.second << endl;
    }
}