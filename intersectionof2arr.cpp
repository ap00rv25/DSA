#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int arr2[], int n, int m) {
    unordered_set<int> s;
    for(int i=0;i<n;i++) {
        s.insert(arr1[i]);
    }
    int res=0;
    for(int i=0;i<m;i++) {
        if(s.find(arr2[i])!=s.end()) {
            res++;
            s.erase(arr2[i]);
        }
    }
    return res;
}

int main()
{
    int arr1[] = {15, 17, 27, 27, 28, 15};
    int arr2[] = {16, 17, 28, 17, 31, 17};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << intersection(arr1, arr2, n, m);
    
    return 0;
}