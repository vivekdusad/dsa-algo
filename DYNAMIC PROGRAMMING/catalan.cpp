
#include <bits/stdc++.h>
using namespace std;
//catalan number formula is (2nCn)/(n+1)
#define f(x) memset(x,0,sizeof(x))
int catalan(int n){
    //n = 5
    //base condition
    if(n==0){
        return 1;
    }
    //recursive call
    int res = 0;
    for(int i=0;i<n;i++){
        res = res+catalan(n-i-1)*catalan(i);
    }
    return res;
}
int catalanDp(int n){
    int dp[n+1];
    f(dp);
    dp[0] = 1;
    
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for(int j=0;j<i;j++){
            dp[i] += dp[i-j-1]*dp[j];
        }
    }
    return dp[n];
    
}
int binomialCoff(int n,int r){
    if(n<r) return 0;
    if((n-r)<r) r = n-r;
    int dp[r+1];
    f(dp);
    dp[0] =1;
    for(int i=1;i<=n;i++){
        for(int j = min(i,r);j>0;j--){
            dp[j] = dp[j]+dp[j-1];
        }
    }
    return dp[r];
}
int catalonBinomial(int n){
    int sub_res = binomialCoff(2*n,n);
    int res = sub_res/(n+1);
    return res;
}

int main(){   
    cout<<catalonBinomial(5);
}
