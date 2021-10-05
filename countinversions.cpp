#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int res=0;
	for(int i=0;i<n-1;i++)
	{
	   for(int j=i+1;j<n;j++)
	   {
	       if(arr[i]>arr[j])
	       {
	           res++;
	       }
	   }
	   
	}
	cout<<res<<endl;
	return 0;
}

// no of elements which are smaller than their preciding number //