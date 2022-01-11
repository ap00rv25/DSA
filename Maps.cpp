#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int,int> m;
	m.insert({1,100});
	m.insert({2,200});
	m.insert({3,300});
	m.insert({4,450});
	m[5] = 500;          //creates new key if not there
	m[4] = 400;          //updates existing key if present
	for(auto &x : m) cout<<x.first<<" "<<x.second<<endl;
	cout<<m.size()<<endl;
	for(auto it=m.begin();it!=m.end();it++) cout<<(*it).first<<" "<<(*it).second<<endl;
	if(m.find(4)==m.end()) cout<<"not found"<<endl;
	else cout<<"found"<<endl;
	auto itc = m.lower_bound(2);
	if(itc!=m.end()) cout<<(*itc).first<<" "<<(*itc).second<<endl;
	else cout<<"no equal or greater value"<<endl;
	auto itt = m.upper_bound(4);
	if(itt!=m.end()) cout<<(*itt).first<<" "<<(*itt).second<<endl;
	else cout<<"no equal or greater value"<<endl;
	return 0;
}