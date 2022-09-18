#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l[], int r[], int ln, int rn) {
    int i=0,j=0,k=0;
    while(i<ln && j<rn) {
        if(l[i]<r[j]) a[k++] = l[i++];
        else a[k++] = r[j++];
    }
    while(i<ln) a[k++] = l[i++];
    while(j<rn) a[k++] = r[j++];
}

void merge_sort(int a[], int n) {
    if(n<2) return;
    int mid = n/2;
    int l[mid];
    int r[n-mid];
    for(int i=0;i<mid;i++) {
        l[i] = a[i];
    }
    for(int i=mid;i<n;i++) {
        r[i-mid] = a[i];
    }
    merge_sort(l,mid);
    merge_sort(r,n-mid);
    merge(a,l,r,mid,n-mid);
}

int main() {
    int arr[] = {8,2,5,3,1,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,n);
    for(auto x : arr) cout<<x<<" ";
    return 0;
}