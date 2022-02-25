#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map <string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"course",15});
    if(m.find("ide")!=m.end()) cout<<"found";
    else cout<<"not found";
    cout<<endl;
    for(auto it=m.begin();it!=m.end();it++) cout<<(it->first)<<" "<<(it->second)<<endl;
    if(m.count("ide")>0) cout<<"found";
    else cout<<"not found";
    cout<<endl;
    cout<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin());
    cout<<m.size()<<endl;
    m.erase(m.begin(),m.end());
    return 0;
}