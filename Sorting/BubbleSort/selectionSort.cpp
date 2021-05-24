
#include <bits/stdc++.h>
using namespace std;
#define sw(x,y) swap(x,y)
void selectionSort(int n,int a[]){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j = i+1;j<n;j++){
            if(a[min_index]>a[j]){
                min_index = j;
                sw(a[min_index],a[i]);
            }
        }
    }
}

int main(){

}