#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define lli long long int

lli boardMoves(int n){
    lli res = 0;
    for(int i=1;i<n/2;i++){
        res += (2*i+1)*i;//for upper cells
        res += (2*i+1)*i;//for lower cells
        res += (2*i-1)*i;//for left cells
        res += (2*i-1)*i;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    cin >> t;
    while(t--) {
      int n;
      cin>>n;
      cout<<boardMoves(n)<<endl;
    }
    return 0;
}
