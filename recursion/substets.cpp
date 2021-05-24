
#include <iostream>

using namespace std;

void subsets(string s,int n,int count,string output){

    if(count == n){
        cout<<output<<endl;
        return;
    }
    subsets(s,n,count+1,output+s[count]);//included
    subsets(s,n,count+1,output);

}

int main(){

    subsets("abc",3,0,"");

}