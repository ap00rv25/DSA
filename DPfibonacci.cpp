// using memoization //

#include<bits/stdc++.h>
using namespace std;

int memo[1000000];

int fib(int n) {
    if(memo[n]==-1) {
        int res;
        if(n==0||n==1) return n;
        else {
            res=fib(n-1)+fib(n-2);
        }
        memo[n]=res;
    }
    return memo[n];
}

int main() {
    int n = 5;
    memset(memo,-1,sizeof(memo));
    cout<<fib(5);
    return 0;
}

// usig tabulation //

#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    int f[n+1];
    f[0]=0,f[1]=1;
    for(int i=2;i<=n;i++) {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
 
int main() {
    cout<<fib(6);
    return 0;
}