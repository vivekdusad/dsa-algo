#include<bits/stdc++.h>
using namespace std;


int matrixChainRes(int a[],int n,int i,int j){
    if(i>=j) return 0;
    int res = INT_MAX;
    for(int k=i;k<j;k++){
        res = min(matrixChainRes(a,n,i,k)+matrixChainRes(a,n,k+1,j)+a[i-1]*a[k]*a[j],res);        
    }
    return res;
}
 

int main(){
    int a[] = {40, 20, 30, 10, 30};
    cout<<matrixChainRes(a,5,1,4);
}