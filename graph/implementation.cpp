#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define inf 100000000
#define V 4

int prims(vector<int> a[],int v,int graph[V][V]){
    int key[v];
    int included[v];
    int res=0;
    for(int i=0;i<v;i++){
        key[i] = inf;
        included[i] = false;
    }
    key[0]=0;
    for(int i=0;i<v;i++){
        int u=-1;
        for(int j=0;j<v;j++){
            if(!included[j]&&(u==-1||key[j]<key[u])){
                u =j;
            }
        }
        included[u] =true;
        res = res+key[u];
        for(int x:a[u]){
            if(graph[u][x] !=0&&included[x]==false){
                key[x] = min(key[x],graph[u][x]);
            }

        }
    }
}

int main(){
    int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 

}