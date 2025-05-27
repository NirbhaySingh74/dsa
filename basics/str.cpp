#include<iostream>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";
    string ans="";
    for(int i=0;i<s.size();i++) {
            char ch = s[i];
            if(isalnum(ch) && ch != ' '){
                ans +=(char)tolower(ch);
            }
        }

    cout<<"ans = "<<ans;
}