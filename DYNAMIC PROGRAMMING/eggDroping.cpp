
#include <bits/stdc++.h>

using namespace std;

int main(){

}
int eggDrop(int e, int f) 
{
    // your code here
    // if(k==0) return 0;
    // if(e==1) return k;
    // if(k==1) return 1;
    // int res=INT_MAX;
    // for(int i=1;i<k;i++){
    //     int sub_res = max(eggDrop(n-1,i),eggDrop(n,f-i));
    //     res = min(res,sub_res);
        
    // }
    // return res;
    int dp[f+1][e+1];
    for(int i=1;i<=f;i++){
        dp[i][1] = i;
    }
    for(int i=1;i<=e;i++){
        dp[1][i] = 1;
        dp[0][i] = 0;
    }
        
    for(int i=2;i<=f;i++){
        for(int j=2;j<=e;j++){
            dp[i][j] = INT_MAX;
            for(int k=1;k<=i;k++){
                dp[i][j] = min(dp[i][j],1+max(dp[k-1][j-1],dp[i-k][j]));
            }
        }
    }
    return dp[f][e];
    
}