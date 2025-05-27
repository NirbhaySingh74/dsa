#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void RevStr(string &str)
{
    vector<string> ans;
    int si = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            int ei = i;
            string temp = str.substr(si, ei - si); // fix: length = ei - si
            ans.push_back(temp);
            si = i + 1;
        }
    }

    // If string doesn't end with space, capture the last word
    if (si < str.size()) {
        ans.push_back(str.substr(si));
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    string str = "the sky is blue";
    RevStr(str);
    return 0;
}
