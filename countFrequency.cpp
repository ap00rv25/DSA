#include <bits/stdc++.h>
using namespace std;

int countFrequency (int arr[] , int n) {
    unordered_map<int, int> h;
    for(int i=0; i<n; i++) {
        h[arr[i]]++;
    }
    for(auto e : h) {
        cout<<e.first<<" "<<e.second<<endl;
    }
}

int main() {
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr, n);
	return 0;
}
