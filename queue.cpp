#include <bits/stdc++.h>         //reverse//  ittreative
#include <queue>
using namespace std;

void reverse(queue<int>& qe) {
    stack<int> s;
    while(qe.empty()==false) {
        s.push(qe.front());
        qe.pop();
    }
    while(s.empty()==false) {
        qe.push(s.top());
        s.pop();
    }
}

void print(queue<int>& qu) {
    while(!qu.empty()) {
        cout<<qu.front()<<" ";
        qu.pop();
    } 
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q);
    print(q);
	// your code goes here
	return 0;
}


#include <bits/stdc++.h>    // recursive //
#include <queue>
using namespace std;

void reverse(queue<int>& qe) {
    if(qe.empty()) {
        return ;
    }
    int x = qe.front();
    qe.pop();
    reverse(qe);
    qe.push(x);
}

void print(queue<int>& qu) {
    while(!qu.empty()) {
        cout<<qu.front()<<" ";
        qu.pop();
    } 
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q);
    print(q);
	// your code goes here
	return 0;
}
