#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

int dearrangments(int n){
    if(n==1)
        return 0;
    if(n==0)
        return 0;
    if(n==2)
        return 1;
    return (n-1)*(dearrangments(n-2)+dearrangments(n-1));
}
int Countdp(int n){
    int dp[n+1];
    dp[2]= 1;
    dp[1] =0;
    for(int i=3;i<=n;i++){
        dp[i] = (i-1)*(Countdp(i-2)+Countdp(i-1));
    }
    return dp[n];
}

int main(){
    cout<<Countdp(3);
}