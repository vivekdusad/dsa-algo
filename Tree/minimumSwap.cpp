#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])


int minimumSwap(int arr[],int n){
    int temp[n];
    int count = 0;
    for(int i=0;i<n;i++){
        temp[i] =arr[i];
    }
    sort(temp,temp+n);
    //if it is complete binary tree n should be odd
    int middle = temp[(n-1)/2];
    if(arr[middle] != arr[0]){
        count++;
        swap(arr[0],arr[middle]);
    }
   for(int i=1;i<n;i++){
       
   }
    
}

int main(){}