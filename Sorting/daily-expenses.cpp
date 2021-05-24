
#include <iostream>

using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
void expense(long long a[],int n){
    long long prev_sum = 0;
    for(int i=0;i<n;i++){
        prev_sum += a[i];
        cout<<prev_sum/(i+1);
        cout<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    expense(a,size(a));

}