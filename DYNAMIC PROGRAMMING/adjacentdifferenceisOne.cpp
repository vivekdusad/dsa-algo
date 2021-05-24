
#include <bits/stdc++.h>
using namespace std;
int longestSebsequence(int a[],int n){
    int ls[n];
    ls[0] = 1;
    for (int  i = 1; i <n ; i++)
    {
        int res =0;
        for (int j = 0; j < i; j++)
        {
            int diff = a[i]-a[j];
            if(abs(diff)==1){
                res = max(res,ls[j]+1);
            }
        }
        ls[i] = res;
        
    }
    int m = ls[0];
    for(int i=0;i<n;i++){
        cout<<ls[i]<<endl;
        m = max(m,ls[i]);
    }
    return m;
}

int main(){
    int A[] = {9, 10, 4, 5, 4, 8, 6};
    cout<<longestSebsequence(A,7);
}