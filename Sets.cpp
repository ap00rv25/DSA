#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> s;
	s.insert(5);
	s.insert(10);
	s.insert(15);
	s.insert(20);
	s.insert(25);
	s.insert(30);
	s.insert(35);
	for(auto x : s) {
	    cout<<x<<" ";
	}
	cout<<endl;
	for(auto x=s.begin();x!=s.end();x++) {
	    cout<<*x<<" ";
	}
	cout<<endl;
	for(auto x=s.rbegin();x!=s.rend();x++) {
	    cout<<*x<<" ";
	}
	return 0;
}