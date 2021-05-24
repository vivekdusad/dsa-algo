
#include <bits/stdc++.h>

using namespace std;


void duplicateItems(int a[],int n){

    unordered_set<int> inset,duplicateset;
// inset.find(a[i]) == inset.end()
    for(int i=0;i<n;i++){
        if(!inset.count(a[i])){
            inset.insert(a[i]);
        }
        else{
            duplicateset.insert(a[i]);
        }
    }

    cout<<"Duplicate Items are: ";
    for(auto i = duplicateset.begin();i != duplicateset.end();i++){
        cout<<*i<<" ";
    }

}

int main(){

    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5}; 
    int n = sizeof(arr) / sizeof(int);

    duplicateItems(arr,n); 

}