#include <bits/stdc++.h>
using namespace std;

int unionSize(int arr1[], int arr2[], int n, int m) {
    unordered_set<int> s;
    for(int i=0;i<n;i++) {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++) {
        s.insert(arr2[i]);
    }
    return s.size();
}

int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << unionSize(arr1, arr2, n, m);
}