#include <bits/stdc++.h>
using namespace std;

struct point{
	int x,y;
};
bool mycomp(point p1, point p2){
	return p1.x<p2.x;
}
int main() {
	// Arrays //
	// increasing order //
	int arr[] = {5,20,7,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int x : arr){
	    cout<<x<<" ";
	}
	cout<<endl;
	// decreasing order //
	sort(arr, arr+n, greater<int>());
	for(int x : arr){
	    cout<<x<<" ";
	}
	cout<<endl;
	// vectors //
	// increasing order //
	vector<int> v = {20,7,5,10};
	sort(v.begin(), v.end());
	for(int x : v){
	    cout<<x<<" ";
	}
	cout<<endl;
	// decreasing order //
	sort(v.begin(), v.end(), greater<int>());
	for(int x : v){
	    cout<<x<<" ";
	}
	cout<<endl;
	// own object and points //
	
	point arr2[]={{3,10},{2,8},{5,4}};
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	sort(arr2, arr2+n, mycomp);
	for(auto i : arr2){
	    cout<<i.x<<" "<<i.y<<endl;
	}
	cout<<endl;
	return 0;
}
