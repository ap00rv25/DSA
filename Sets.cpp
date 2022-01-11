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
	cout<<endl;
	auto it = s.find(15);
	if(it==s.end()) cout<<"Not Found"<<" ";
	else cout<<"Found"<<" ";
	cout<<endl;
	cout<<s.count(10)<<endl;
	auto itt = s.find(25);
	s.erase(itt,s.end());
	for(auto x : s) cout<<x<<" ";
	cout<<endl;
    auto ita = s.lower_bound(5);
	if(ita!=s.end()) cout<<*ita<<endl;
	else cout<<"greater than the largest"<<endl;
	auto itb = s.upper_bound(6);
	if(itb!=s.end()) cout<<*itb<<endl;
	else cout<<"greater than the largest"<<endl;
	return 0;
}