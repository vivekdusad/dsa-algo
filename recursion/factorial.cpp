#include <iostream>
using namespace std;

int fact(int n){
    if(n == 0){//base case 
        return 1;
    }

    int smallAns = fact(n-1);
    return n*smallAns;
}
int main(){

}