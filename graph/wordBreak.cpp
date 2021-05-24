#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
bool findString(string a[],string s){

}
bool wordBreak(string s,string dict[]){
    int n = s.length();
    if(n==0){
        return false;
    }

    for(int i=1;i<n;i++){
        if(findString(dict,s.substr(0,i))&&wordBreak(s.substr(i,n-1),dict)){
        return true;
    }
    }
    return false;
}

int main(){

}