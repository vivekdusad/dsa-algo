
#include <bits/stdc++.h>

using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int key = a[i];
        int j = i-1;
        while (a[j]>key&&j>=0)
        {
            /* code */
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;        
    }
}

int main(){
    int a[] = {20,5,40,60,10,30};
    int n = size(a);
    cout<<n<<endl;
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}