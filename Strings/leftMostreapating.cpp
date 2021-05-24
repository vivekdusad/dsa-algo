
#include <bits/stdc++.h>

using namespace std;
const int _char = 256;

int leftOccurence(string &s){
    int n = s.length();
    

    // // cout<<s.length();
    // for(int i=0;i<s.length();i++){
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i] == s[j]){
    //             return i;
    //         }
            

    //     }
    // }
    // return -1;


    int a[_char] = {0};
    int count = 0;

    for(int i=0;i<n;i++){
        a[s[i]]++;

        if(a[s[i]]>1){
            return i;
        }
    }

    // for(int i=0;i<n;i++){

    //     if(a[s[i]]>1){
    //         return i;
    //     }
    // }

    return -1;
    
}

int main(){

    string s = "geeksforgeeks";

    cout<<leftOccurence(s);

}