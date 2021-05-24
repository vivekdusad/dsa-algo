
#include <bits/stdc++.h>

using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
int productRes(int a[],int n,int k){
    if(k<0) return 0;
    if(n==0) return 0;
    int x=0,y=0;
    if(k/a[n-1]>=1){
        x= productRes(a,n-1,k/a[n-1])+1;
    }
    y= productRes(a,n-1,k);
    return x+y;

}
int productDp(int a[],int n,int k){
    int dp[k+1][n+1];
    memset(dp, 0, sizeof(dp)); 
    
    int x=0,y=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(i/a[j-1]>=1){
                dp[i][j] += dp[i/a[j-1]][j-1] + 1; 
            }
            dp[i][j] += dp[i][j - 1];
            
        }
    }
    return dp[k][n];
}

int main(){
    int a[] =  {4,8,7,2};
    cout<<productDp(a,size(a),50);

}