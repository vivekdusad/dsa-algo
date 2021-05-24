#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

long long dp[1000][1000];
 long long maximum(int arr[],int i,int j){
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(i>j) return dp[i][j]= 0;
    if(i==j-1){
        return dp[i][j] =  arr[i];
    }
    if(i == j-2){
        return dp[i][j] = max(arr[i],arr[j-1]);
    }    
    long long a = min(maximum(arr,i,j-2),maximum(arr,i+1,j-1))+arr[j-1];
    long long b = min(maximum(arr,i+2,j),maximum(arr,i+1,j-1))+arr[i];
    return dp[i][j] =  max(a,b);
}
long long maximumAmount(int arr[], int n){    
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            dp[i][j] = -1;      
    maximum(arr,0,n);
    return dp[0][n];
}
int main(){
    int A[] = {2,3,15,7};
    int n  =size(A);
    cout<<maximumAmount(A,n);
}