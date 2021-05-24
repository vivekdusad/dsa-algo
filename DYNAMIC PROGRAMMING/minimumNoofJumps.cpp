
#include <bits/stdc++.h>
using namespace std;
int minJumps(int arr[],int n){
    // if(i>=n-1) return 0;  
    // int res = INT_MAX;     
    // for(int gap=1;gap<=arr[i];gap++){
    //     res = min(res,minJumps(arr,n,i+gap)+1);
    // }
    // return res;    
    int dp[n];    
    for(int i=0;i<n;i++){
        dp[i] = 1000;
    }
    dp[n-1] = 0;
    // cout<<"Dp array 1 : ";
    // for(int i=0;i<n;i++){
    //     cout<<dp[i]<<", ";
    // }
    // cout<<endl;
    for(int i=n-2;i>=0;i--){
        for(int gap=1;gap<=arr[i] ;gap++){
            if(i+gap<=n-1){
                dp[i] = min(dp[i],dp[i+gap]+1);
            }
        }
    }
    // cout<<"Dp array 2 : ";
    
    // for(int i=0;i<n;i++){
    //     cout<<dp[i]<<", ";
    // }
    return dp[0];
    
}
int main(){
    int arr[] = {1,3,8,5,9,2,6,7,6,8,9};
    int n = 11;
    minJumps(arr,n);
};