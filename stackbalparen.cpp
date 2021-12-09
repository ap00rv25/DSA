#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b) {
    return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}')); 
}

bool ismatching(string str) {
     stack<char> s;
     for (int i = 0; i < str.length(); i++) {
     if(str[i]=='(' || str[i]=='[' || str[i]=='{') {
         s.push(str[i]);
     }
     else {
        if(s.empty()==true)
            return false;
        else if(check(s.top(),str[i])==false) {
            return false;
        }
        else {
            s.pop();
        }
     }
     }
     return (s.empty()==true);
}

int main() {
    string s = "{()}[]";
    if(ismatching(s)) {
        cout<<"balanced"<<endl;
    }
    else {
        cout<<"notbalanced"<<endl;
    }
	// your code goes here
	return 0;
}
