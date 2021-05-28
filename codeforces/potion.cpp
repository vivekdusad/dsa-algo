#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
class Node{public:int data;Node*right;Node*left;};


int  dp(int a[],int i,int n,int health){
    if(i>=n){
        return 0;
    }
    if(health<0){
        return 0;
    }
    int incl = dp(a,i+1,n,health+a[i])+1;
    int ecxl =dp(a,i+1,n,health);
    return max(incl,ecxl);
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    
      int n;
      cin>>n;
      int a[n];      
      for(int i=0;i<n;i++){cin>>a[i];}
      cout<<dp(a,0,n,0);
    
    return 0;
}