
#include <iostream>
#include<vector>

using namespace std;

int main(){

}


class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code fsdfhere
        for(int i =0,j=k-1;i<n,j<n;i = i+k,j = j+k){
            Swap( &arr[i], & arr[j]);
        }
        
    }
};

void Swap(long *a,long *b){
    long temp = *a;
    *a = *b;
    *b = temp;

}