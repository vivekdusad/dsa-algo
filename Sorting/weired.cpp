
#include <bits/stdc++.h>
using namespace std;

long long  sum(int n ){
    long long res_sum=0;
    long long res=0;
    for(int i=1;i<=n;i++){
        res = res+pow(i,2);
        res_sum = res_sum+res;

    }
    return res_sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);

}