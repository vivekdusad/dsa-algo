
#include <iostream>

using namespace std;
#define n 5
int parent[n];
int rtank[n];
void initlize(){
    for(int i=0;i<n;i++){
        parent[i] = i;
        rtank[i] = 0;
    }    
}
int find(int x){
    if(parent[x] == x) return x;
    
}
void Union(int a, int b){}


int main(){

}