#include<bits/stdc++.h>
using namespace std;
// #define size(x) sizeof(x)/sizeof(x[0])


int LongestStrange(int a[],int n){
    //-2021,-1,-1,-1

    vector<int> v;
    v.push_back(a[0]);
    int i=0;
    for(i=0;i<n;i++)
    {
        int j= 0;
        while (j++<v.size())
        {
            if(abs(a[j]-a[i])<-1){
                break;
            }

        }
        
        
    }
    
}

int main(){}