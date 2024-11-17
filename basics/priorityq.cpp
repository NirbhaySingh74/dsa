#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int> pq;
    pq.push(4);
    pq.push(5);
    pq.push(7);
    pq.emplace(1);
    pq.push(5);
    cout<<pq.top();
}