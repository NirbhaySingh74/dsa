#include<iostream>
using namespace std;

int sumOgNatural(int n) {
    int sum;
    sum = n * (n + 1)/2;
    return sum;
}

int main() {
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<sumOgNatural(n)<<endl;
    return 0;
}