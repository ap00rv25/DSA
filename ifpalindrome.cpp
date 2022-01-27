#include <bits/stdc++.h>
using namespace std;

bool ispal(string str) {
    string rev = str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}

int main() {
    string str = "appa";
    cout<<ispal(str)<<endl;
	// your code goes here
	return 0;
}
