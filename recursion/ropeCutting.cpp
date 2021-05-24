
#include <bits/stdc++.h>

using namespace std;

int ropePeices(int n,int a,int b,int c,int peices){
    if(n ==0){
        return peices;
    }
    if(n<0){
        return -1;
    }
    int x = ropePeices(n-a,a,b,c,peices+1);
    int y = ropePeices(n-b,a,b,c,peices+1);
    int z = ropePeices(n-c,a,b,c,peices+1);

    int d =  max(x,y);
    int e = max(d,z);
    return e;
}

int main(){

    cout<<ropePeices(9,2,2,2,0);

}