#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

int smallestSum(int a[],int n){
    int local_res = 0;
    int res = INT_MAX;
    for(int i=0;i<n;i++){
        local_res = min(a[i],local_res+a[i]);
        res = min(res,local_res);
    }
    return res;
}
int main(){
    int arr[] = {2, 6, 8, 1, 4};
    int n = size(arr);
    cout<<smallestSum(arr,n);
}