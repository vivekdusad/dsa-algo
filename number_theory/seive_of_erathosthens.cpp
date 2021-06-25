#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
class Node{public:int data;Node*right;Node*left;};


void seive_of_eratosthens(int n,int seive[]){   

    if(n<2) return;
    for(int i=2;i<n;i++){
        if(seive[i]) continue;

        for(int u=2*i;u<n;u +=i){
            seive[u] = 1;
        }
    }

}
void smallestPrimeFactor(int seive[],int n){
    if(n<2) return ;
    
    for(int i=1;i<n;i++){
        if(!seive[i]){
            for(int u=2*i;i<n;u += i){
                seive[u] = i;
            }
        }
    }
}


int main(){
    int n = 20;
    int seive[n];
    for(int i=0;i<n;i++){
        seive[i] = 0;
    }
    // seive_of_eratosthens(n,seive);
    smallestPrimeFactor(seive,n);
    cout<<seive[4];
}