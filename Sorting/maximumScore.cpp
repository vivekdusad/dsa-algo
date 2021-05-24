
#include <iostream>

using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
int getScore(int a[],int n){
    int N= n/3;
    cout<<n;
    int score1 = 0;
    for(int i=0;i<N;i++){
        score1 =score1+ a[i];
    }
    
    int score2 = 0;
    for(int i=n;i<2*N;i++){
        score2 += a[i];
    }
    
    return score1-score2;

}
int maximumScore(int a[],int n,int N){
    if (N==0)
    {
        /* code */
        
        return getScore(a,n);
    }
    if(n==0) return 0;
    
    //recursion
    int score = -10000;
    score = max(max(maximumScore(a,n-1,N-1),maximumScore(a,n,N)),score)+1;
    return score;

}

int main(){
    int a[] = {3,2,1};
    maximumScore(a,size(a),1);

}