
#include <bits/stdc++.h>
using namespace std;

int  unionArarys(int a[],int b[],int n,int kb){

    unordered_set<int> unionElements;

    for(int i=0;i<n;i++){

        unionElements.insert(a[i]);

    }
    for(int i=0;i<kb;i++){
        unionElements.insert(b[i]);
    }

    return unionElements.size();

}

int main(){

    int a[] = {3,3,3};
    int b[] = {3,3};

    cout<<unionArarys(a,b,3,2);

}