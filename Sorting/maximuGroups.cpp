
#include <bits/stdc++.h>

using namespace std;

int max_groups(int n){
    if(n<=2) return 0;
    
    int count=0;
    count += max_groups(n-3)+1;
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<max_groups(n);

}