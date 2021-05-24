
#include <bits/stdc++.h>
using namespace std;

//ncr = n-1cr+n-1cr-1;
// answer(n,r) = answer(n-1,r)+answer(n-1,r-1);

int nCr(int n,int r){
    // if(n<r) return 0;
    // if(r==0) return 1;
    // if(n==r) return 1;    
    // return 
    //  nCr(n-1,r)+nCr(n-1,r-1);
    int dp[n+1][r+1];
    for (int i = 0; i <=n; i++)
    {
        /* code */
        dp[i][0]=1;
    }
    for(int i=1;i<=r;i++){
        dp[0][i] =0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=r;j++){
            if(i>j){
                dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
            }else if(i==j) dp[i][j] = 1;
            else dp[i][j] = 0;
        }
    }
    return dp[n][r];   
       
} 

int main(){
    cout<<nCr(3,2);

}