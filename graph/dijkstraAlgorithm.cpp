#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define inf 10000000
const int V=4;
void dijasktraAlgorithm(vector<int> a[],int v,int weight[V][V]){
    int distance[v];
    bool isCalculatedDistance[v];
    for(int i=0;i<v;i++){
        distance[i] = inf;
        isCalculatedDistance[i] = false;
    }
    distance[0]=0;
    for(int i=0;i<v;i++){
        int u=-1;
        for(int j=0;j<v;j++){
            if(isCalculatedDistance[j] == false&&(u==-1||distance[j]<distance[u])){
                u==j;
            }
        }
        isCalculatedDistance[u] = true;
        for(int adj:a[u]){
            if(isCalculatedDistance[adj]== false&&(distance[adj]>distance[u]+weight[u][adj])){
                distance[adj] = distance[u]+weight[u][adj];
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<distance[i]<<" ";
    }

}
int main(){

}