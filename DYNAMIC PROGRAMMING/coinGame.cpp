#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

bool coin(int n,int x,int y){
    if(n<=0) return 0;
    if(n==1) return 1;
    if(n==2) return 0;    
    if(coin(n-1,x,y)||coin(n-x,x,y)||coin(n-y,x,y)){
        return true;
    }
    return false;
}
bool coinDp(int n,int x,int y){
    int dp[n+1];
    dp[0] =0;
    dp[1] = 1;
    dp[2] = 0;   
    for(int i=3;i<=n;i++){
        bool a=true,b=true,c=true;
        if(i-x>=0)
            a = dp[i-x];
        if(i-y>=0) b = dp[i-y];
        c =dp[i-1];
        dp[i] = a||b||c;
    }
    return dp[n];
}

int main(){
    cout<<coinDp(5,3,4);
}