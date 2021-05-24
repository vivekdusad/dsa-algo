
#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
int nCr(int n, int r){
      // code here
       int dp[n+1][r+1];
    
        for(int i=0;i<=n;i++) dp[i][0] = 1;
        for(int i=0;i<=r;i++){
            dp[i][i] = 1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=r;j++){
                if(i>j){
                    dp[i][j] = (dp[i-1][j-1]%M+dp[i-1][j]%M)%M;
                }else if(i<j){
                    dp[i][j] = 0;
                }
            }
        }
        return dp[n][r]%M;
}
int binomialCofficent(int n, int r){
        int dp[r+1];
        if(n<r) return 0;
        if((n-r)<r) r = n-r;
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            for(int j=min(i,r);j>0;j--){
                dp[j] = dp[j]%M+dp[j-1]%M;
            }
        }
        return dp[r]%M;
}

int main(){
    cout<<binomialCofficent(3,2);

}