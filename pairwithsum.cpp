#include <bits/stdc++.h>
using namespace std;

int pairWithSumX(int arr[], int n, int sum) {
    unordered_set<int> s;
    for(int i=0;i<n;i++) {
        if(s.find(sum-arr[i])!=s.end()) {
            return 1;
        }
        else 
            s.insert(arr[i]);
    }
    return 0;
}

int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 14;
    
    cout << pairWithSumX(arr, n, X);
    return 0;
}


// unordered set //