
#include <bits/stdc++.h>
using namespace std;
int longestSubsequence(int n, int a[]){
    int t[n];
    memset(t,-1,n);
    if(n==1){
        return 1;
    }
    if(n==2) return 2;
    for(int i=n-1;i>=0;i--){
       if(a[n-2]<a[n-1]){
           t[i] =1+longestSubsequence(n-1,a);           
       }
    }
    int max  =-1;
    for(int i=0;i<n;i++)
        if(t[i]>max)
            max  =t[i];       
    return max;
}

int main(){
    int N = 6;
    int A[] = {5,8,3,7,9,1};
    cout<<longestSubsequence(N,A);

}