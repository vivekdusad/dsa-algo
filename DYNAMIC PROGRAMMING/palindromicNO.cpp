#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define String string 

int countPS(string str,int i,int j)
{
   if(i==j){
      return 1;
   }  
   if(str[i] == str[j]){
      return 1+countPS(str,i+1,j-1);
   }   
   return countPS(str,i+1,j)+countPS(str,i,j-1)-countPS(str,i+1,j-1);
   
}

int main(){
   int n = size("aab");
   cout<<countPS("aab",0,n-1);

   int dp[n+1][n+1]
}