#include<bits/stdc++.h>
using namespace std;

int minCoins(int arr[], int m, int value) {
    int dp[value+1];
    dp[0]=0;
    for(int i=1;i<=value;i++) dp[i]=INT_MAX;
    for(int i=1;i<=value;i++) {
        for(int j=0;j<m;j++) {
            if(arr[j]<=i) {
                int sub_res=dp[i-arr[j]];
                if(sub_res!=INT_MAX && sub_res+1<dp[i]) dp[i]=sub_res+1;
            }
        }
    }
    return dp[value];
}

int main() {
    int arr[] = {3, 4, 1}, val =5, n =3;
    cout<<minCoins(arr, n, val);
    return 0;
}