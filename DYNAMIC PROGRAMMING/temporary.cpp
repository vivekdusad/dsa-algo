#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

int combinations(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return combinations(n-3)+combinations(n-5)+combinations(n-10);
}
int main(){
    cout<<combinations(13)<<endl;
    cout<<combinations(8)<<endl;
    cout<<combinations(20)<<endl;

}