#include <iostream>
#include<vector>

using namespace std;


void bubbleSort(int a[],int n){

    for(int i=0;i<n;i++){

    }

}
void frequencycount(int arr[],int n)
{ 
    // code here

    int freq= 1;
    for(int i=1;i<n+1;i++){

        if(arr[i-1] == arr[i])
        {
            freq++;
            
        }
        else{
            cout<<arr[i-1]<<" has occured "<<freq<<" times"<<endl;
            freq = 1;
        }
        
       
    }



}
int main(){
    int A[] = {1,1,1,2,3,3,4,5};

    int n = sizeof(A)/sizeof(A[0]);
    frequencycount(A,n);
}
