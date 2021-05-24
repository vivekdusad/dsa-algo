
#include <bits/stdc++.h>
#define size(x) sizeof(x)/sizeof(x[0])
using namespace std;

int maxSum(int arr[],int n){

    int sum[n];
    memset(sum,-1,size(sum));
    if(sum[n] !=-1) return sum[n];
    if(n==0) return sum[n] =0;
    if(n==1) return sum[n] =arr[0];
    if(n==2) return sum[n] = arr[0]+arr[1];
    return max(maxSum(arr,n-1),max(maxSum(arr,n-2)+arr[n],maxSum(arr,n-3)+arr[n]+arr[n-1])); 
}
int sumMax(int arr[],int n){
    int sum[n];
    if(n>=1) sum[0] = arr[0];
    if(n>=2) sum[1] = arr[0]+arr[1];
    if(n>2){
        sum[2] = max(sum[1],max(arr[0]+arr[2],arr[1]+arr[2]));
        for(int i=3;i<n;i++){
            sum[i] = max(sum[i-1],max(arr[i]+sum[n-2],sum[i-3]+arr[i]+arr[i-1]));
        }
    }
    return sum[n-1];
}

int main(){

}