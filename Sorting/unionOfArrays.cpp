
#include <bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

void unionOfArrays(int a[],int b[],int la,int lb){
    int i=0,j=0;
    int prev = -200;
    
    while (i<la&&j<lb)
    {
        /* code */
        if(i>0&&a[i] == a[i-1]){
        i++;
        continue;
    }
    if(j>0&&b[j] == b[j-1]){
        j++;
        continue;
    }
        if(a[i] == b[i]){
            cout<<a[i];
            i++;
            j++;
        }else if(a[i]<b[i]){
            cout<<a[i];
            i++;
        }else if(a[i]>b[j]){
            cout<<b[j];
            i++;
        }
    }
    for(int k=i;k<la;k++){
        cout<<a[k];
    }
    for(int k=j;j<lb;k++) cout<<b[k];
    
}
int main(){
    int a[]= {2,3,3,3,4,4};
    int b[] = {4,4};
    unionOfArrays(a,b,size(a),size(b));

}