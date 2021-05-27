#include <bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x) / sizeof(x[0])

bool DFSRec(vector<int> a[], int s, int parent, bool isViisted[], int v)
{
    isViisted[s] = true;
    for (int u : a[s])
    {
        if (isViisted[u] == false)
        {
            if (DFSRec(a, u, s, isViisted, v))
            {
                return true;
            }
        }
        else if (u != parent)
        {
            return true;
        }
    }
    return false;
}
bool DFS(vector<int> a[], int v)
{
    bool isVisited[v];
    int count=0;
    bool flag= false;
    for (int i = 0; i < v; i++)
    {
        if (isVisited[i] == false)
        {
            if (DFSRec(a, i, -1, isVisited, v))
            {
                flag =  true;
                count++;
            };
        }
    }
    if(flag==true&&count<2){
        return true;
    }
    return false;
}

void solve() {}

int main() {}
