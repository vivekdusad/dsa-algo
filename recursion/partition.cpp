
#include <iostream>

using namespace std;

int fx(string s,int i,int j){
    if(i == j){
        return 1;
    }
    if(s[i]== s[j-1]){
        return fx(s,i+1,j-1);
    }else{
        return min(fx(s,i+1,j),fx(s,i,j-1))+1;
    }
}

int main(){
    cout<<fx("geek",0,4);

}