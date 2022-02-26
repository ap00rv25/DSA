#include <bits/stdc++.h>
using namespace std;

int ZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> s;
    int prefixsum = 0;
    s.insert(0);
    for(int i=0;i<n;i++) {
        prefixsum += arr[i];
        if(s.find(prefixsum)!=s.end()) {
            return 1;
        }
        s.insert(prefixsum);
    }
    return 0;
    
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << ZeroSumSubarray(arr, n);
}

// unordered set //