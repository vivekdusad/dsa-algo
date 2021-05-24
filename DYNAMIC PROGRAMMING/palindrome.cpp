#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

int longestPalinSubseq (string s,int i,int j)
{
    // your code here
    int n = s.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j){
                dp[i][j] = 1;
            }
            if(i+1==j){
                dp[i][j] =1;
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int gap=2;gap<=n-i+1;gap++){
            int j = i+gap-1;
            if(s[i] == s[j]){
                dp[i][j] = dp[i+1][j-1]+2;
            }else{
                dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
            }
            
        }
    }
    cout<<"matrix:"<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i<=j){
                cout<<dp[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return dp[0][n-1];
}

int main(){
    string S = "bbabcbcab";
    
    cout<<longestPalinSubseq(S,0,S.length());
}