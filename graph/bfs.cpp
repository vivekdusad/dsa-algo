
#include<bits/stdc++.h>
using namespace std;
#define sixe(x) sizeof(x)/sizeof(x[0])
void BFS(vector<int> a[],int v,int s){
    bool isVisited[v];
    memset(isVisited,false,v);
    queue<int> q;
    q.push(s);
    while (q.empty() == false)
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";     
        for(int v:a[x]){
            if(isVisited[v]==false){
                q.push(v);
                isVisited[v] = true;
            }
        }
    }
    
}

int main(){

}