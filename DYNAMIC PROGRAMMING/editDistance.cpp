
#include <bits/stdc++.h>
using namespace std;
int operation(string s1,string s2){
    int l1= s1.length();
    int l2 = s2.length();
    if(l1 == 0) return l2;
    if(l2 == 0) return l1;
    int count = 0;
    if(s1[l1-1] == s2[l2-1]){
        return operation(s1.substr(0,l1-1),s2.substr(0,l2-1));
    }else if(s1[l1-1] != s2[l2-1]){
        count = min(operation(s1.substr(0,l1-1),s2.substr(0,l2-1)),min(operation(s1,s2.substr(0,l2-1)),operation(s1.substr(0,l1-1),s2)))+1;
        
    }
    return count;
}
int editDistance(string s1,string s2){
    int l1= s1.length();
    int l2 = s2.length();
    int dp[l1+1][l2+1];
    for(int i=0;i<=l1;i++) dp[i][0] = i;
    for(int i=0;i<=l2;i++) dp[0][i] = i;

    for(int i=1;i<=l1;i++){
        for(int j = 1;j<=l2;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            }
        }
    }
    return dp[l1][l2];

}

int main(){
    string s1 = "vivk";
    string s2 = "k";
    int n1= s1.length();
    int n2 = s2.length();
    cout<<editDistance(s1,s2);
    

}