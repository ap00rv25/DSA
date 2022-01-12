#include <bits/stdc++.h>            // print ceil in array using set //
using namespace std;

void printceil(int arr[], int n) {
    cout<<"-1"<<" ";
    set<int> s;
    s.insert(arr[0]);
    for(int i=0;i<n;i++) {
        if(s.lower_bound(arr[i])!=s.end())
            cout<<*(s.lower_bound(arr[i]))<<" ";
        else 
            cout<<"-1"<<" ";
        s.insert(arr[i]);
    }
}

int main() {
	int arr[] = {2,8,30,15,25,12};
	int n = sizeof(arr)/sizeof(arr[0]);
	printceil(arr,n);
}