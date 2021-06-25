#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
class Node{public:int data;Node*right;Node*left;};


void dp(int a[],int i,int n,int &potions){
  static int health = 0;
  int incl,excl;
  if(health+a[i]>0){
    potions++;
    dp(a,i+1,n,potions);
  }
  dp(a,i+1,n,potions);
  cout<<"potions "<< potions;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){cin>>a[i];}
      int potions=0;
      dp(a,0,n,potions);
    
    return 0;
}