
#include <iostream>

using namespace std;

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp; 

}


void reverseArr(int arr[],int str,int n){///str is starting element    n is last element
    
    for(int i=str;i<n-1;i++){
        swap(&arr[i],&arr[n-i-1]);
    }
   
}


void rotateArr(int arr[], int d, int n){
    
    
    ///reverse upto d elements and reverse whole array
    
    reverseArr(arr,0,d);///upto d-elemnts
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverseArr(arr,d,n);//reverse rest element
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArr(arr,0,n);//reverse Whole Array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
    // code here
}

int main(){


    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);


    rotateArr(a,2,5);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}