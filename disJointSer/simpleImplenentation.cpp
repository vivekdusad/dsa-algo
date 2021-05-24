
#include <iostream>
using namespace std;
#define n 5

int parent[n];
void initlize(){
    for(int i=0;i<n;i++) parent[i]= i;
}
int find(int x){
    if(parent[x] == x) return x;
     return find(parent[x]);
}
void Union(int a,int b){
    int a_res = find(a);
    int b_res = find(b);
    if(a_res == b_res) return;
    parent[b_res] = a_res;
}

int main(){
    initlize();//parent array is initlized here
    Union(0,2);
    Union(2,4);
    cout<<find(0);
         
}