
#include <bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
//these arrays are sorted
void intersection(int a[],int b[],int la,int lb){
    int i=0,j=0;
    int prev = -200;
    while (i<la&&j<lb)
    {
        /* code */        
        if(a[i] == b[j]){
            if(prev != a[i]){
                cout<<a[i]<<" ";
                prev = a[i];
            }
            i++,j++;
        }else if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }
    }    

}

int main(){
    int a[] = {1,1,3,3,3};
    int b[] = {1,1,1,1,3,5,7};
    intersection(a,b,size(a),size(b));
    

}