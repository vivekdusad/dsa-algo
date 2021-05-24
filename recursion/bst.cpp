
#include <iostream>

using namespace std;

int bst(int n){
    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if (n == 2)
    {
        /* code */
        return 2;
    }
    int res = 0;
    for(int i=1;i<=n;i++){
        int a = bst(i-1);
        int b = bst(n-i);
        res = res+a*b;
    }
    return res;
    
}

int main(){
    cout<<bst(3);

}