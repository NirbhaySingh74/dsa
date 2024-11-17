#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    for (auto it : st)
    {
        cout << it << " ";
    }
    return 0;
}