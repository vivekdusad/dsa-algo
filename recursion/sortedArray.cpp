
#include <iostream>

using namespace std;
int a[] = {1,3,9,7};
int n = 4;

bool isSorted(int i){
    if(i == n-1){
        return true;
    }
    if(a[i]<a[i+1]){
        isSorted(i+1);
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    cout<<isSorted(0);

}