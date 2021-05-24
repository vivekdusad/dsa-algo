#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define inf INT_MAX
int shortestRec(vector<int> a[],int v,int key,int s){
    if(s==key) return 0;
    int res= INT_MAX;
    for(int x:a[s]){
        res = min(shortestRec(a,v,key,x)+1,res);
    }
    return res;
}
void shortestPath(vector<int> a[],int v,int s){
    // for(int i=0;i<v;i++){
    //     cout<<shortestRec(a,v,i,s)<<" ";
    // }    
    bool isVisited[v];
    int distance[v];
    memset(distance,inf,v);
    memset(isVisited,false,v);
    queue<int> q;
    q.push(s);
    while (q.empty() == false)
    {
        int x = q.front();
        q.pop();        
        for(int v:a[x]){
            if(isVisited[v]==false){
                distance[v] = distance[x]+1;
                q.push(v);
                isVisited[v] = true;
            }
        }
    }
    
}

int main(){}