#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

bool compare(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second){
        return true;
    }
    return false;
}
int activitySelection(pair<int,int> a[],int n){
    sort(a,a+n,compare);
    int res = 0;
    int i=0;
    while (i++<n){
        
    }
    
    
}

int main(){}