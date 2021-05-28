#include<bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
void createArray(int n,vector<int>&v){
    int prev =1;
    for(int i=1;i<n;i++){
        prev = prev*10+1;
        v.push_back(prev);
    }
}


//132
//21
//10
bool dp(int key,int n,vector<int>a){
    int dps[key+1][n+1];
    for(int i=0;i<=n;i++){
       dps[0][i] =1;
    }
    for(int i=1;i<=key;i++){
        dps[i][0] = 0;        
    }
    for(int i=1;i<=key;i++){
        for(int j=1;j<=n;j++){
            if(i>a[j-1]){
                dps[i][j] = dps[i-a[j-1]][j]||dps[i][j-1];
            }else{
                dps[i][j] = dps[i][j-1];
            }
        }
    }
    return dps[key][n];

}


bool solve() {
  int key = 132;
//   cin>>key;//33
  int digits = countDigit(key);
  vector<int> arr;
  createArray(digits,arr);
  int n  =arr.size();  
  return dp(key,n,arr);

  

}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int t = 1;
    // cin >> t;
    // while(t--) {
      cout<<solve();
    // }

    return 0;
}




