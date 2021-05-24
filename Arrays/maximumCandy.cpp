
#include <bits/stdc++.h>

using namespace std;





int  MaximumCandy(int A[],int n,int k){
    sort(A, A + n);

    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    int sum = 0;
    int i;
    for(i=0;i<n;i++){

        sum  = sum+A[i];

        if(A[i]>50){

            sum = sum-A[i];

        }else{
            continue;
        }

    }

    if(sum<50){

        return i;


    }
    else{
        return 0;
    }
}


int main(){

    int A[] = { 1, 12, 5, 111, 200, 1000, 10, 9, 12, 15 };

    int n = sizeof(A)/sizeof(A[0]);

    cout<<"INT: "<<MaximumCandy(A,n,50)<<endl;

}