
#include <bits/stdc++.h>
using namespace std;


void distinctElements(int a[],int n){

    unordered_map<int,int> elements; 

    for(int i=0;i<n;i++){

        elements[a[i]]++;
 
    }


    for(auto itr = elements.begin();itr != elements.end();itr++){

        cout<<itr->first<<" : "<<itr->second<<endl;

    }
}

int main(){

    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5}; 
    int n = sizeof(arr) / sizeof(int);

    distinctElements(arr,n);

}