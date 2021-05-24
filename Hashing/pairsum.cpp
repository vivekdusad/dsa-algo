
#include <bits/stdc++.h>
using namespace std;

bool pairs(int a[],int n,int sum){

    unordered_set<int> pair;

   for(int i=0;i<n;i++){

       
       if(pair.find(sum-a[i]) != pair.end()){

           return true;

       }
       pair.insert(a[i]);
   }
   return false;

}

int main(){
    int a[] = {11,5,6};

    cout<<pairs(a,3,10);

}