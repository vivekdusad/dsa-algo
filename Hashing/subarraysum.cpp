
#include <iostream>

using namespace std;

bool sum(int a[],int n,int s){

    for(int i=0;i<n-3;i++){

        if(a[i]+a[i+1]+a[i+2] == s){
            return true;
        }
        
    }
    return false;

}

int main(){

    int a[] = {3,1,-2,5,6};

    cout<<sum(a,6,0);

}