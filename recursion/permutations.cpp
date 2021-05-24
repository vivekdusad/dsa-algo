
#include <bits/stdc++.h>
using namespace std;

void permutations(string s,string output){

    if(s.length() == 0){
        cout<<output<<endl;
        return;
    }
    for (int  i = 0; i < s.length(); i++)
    {
        string ans = s.substr(0,i)+s.substr(i+1);
        permutations(ans,output+s[i]);
    }
    

}

int main(){
    permutations("abc","");

}