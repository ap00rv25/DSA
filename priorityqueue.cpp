#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue <int,vector<int>,greater<int>> pq;    // Min Heap //
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<" "<<pq.top()<<endl;
    while(pq.empty()==false) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue <int> pq1;                            // Max Heap //
    pq1.push(10);
    pq1.push(15);
    pq1.push(5);
    cout<<pq1.size()<<" "<<pq1.top()<<endl;
    while(pq1.empty()==false) {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
	return 0;
}
