
#include <bits/stdc++.h>
using namespace std;


bool sum0(int a[],int n,int s){

    int sum = 0;
    unordered_set<int> subarraySum;


    subarraySum.insert(sum);
    for(int i = 0;i<n;i++){

        sum = sum+a[i];

        if(subarraySum.find(sum-s) == subarraySum.end()){

            
            subarraySum.insert(sum);
        }
        else{
            return true; 
        }

    }
    return false;

}

int main(){

    int a[] = {3,2,5,6};

    int n = sizeof(a)/sizeof(a[0]);

    cout<<sum0(a,n,10);

}