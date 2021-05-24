
#include <bits/stdc++.h>
using namespace std;

void intersection(int a[],int b[],int ka,int kb){


    unordered_map<int,int> common;

    for(int i = 0;i<ka;i++){

        common[a[i]] = 0;

    }

    for(int i=0;i<kb;i++){

        if(common.find(b[i]) != common.end()){
            common[b[i]] = 1;
        }
        else{
            common[b[i]] = 0;
        }
    }

    for(auto i = common.begin();i != common.end();i++){

        if(i->second == 1){
            cout<<i->first<<" ";
        }

    }

}

int main(){

    int a[] = {10,15,20,80,30,30,5};
    int b[] = {30,5,30,80};

    intersection(a,b,7,4);

}