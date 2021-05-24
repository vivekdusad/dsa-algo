
#include <iostream>

using namespace std;

int fx(int arr[],int n,int sum){
    if(sum == 0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int a = fx(arr,n-1,sum-arr[n-1]);
    int b = fx(arr,n-1,sum);

    return a+b;
}

int main(){
    int a[] = {10,20,15};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<fx(a,n,37);

}