
#include <iostream>
using namespace std;

int LCSof3(string a, string b, string c, int n1, int n2, int n3)
{
    
    if(n1==0||n2==0||n3==0){
        return 0;
    }
    if(a[n1-1] == b[n2-1]==c[n3-1]){
        return LCSof3(a,b,c,n1-1,n2-1,n3-1)+1;
    }
    else{
        return max(LCSof3(a,b,c,n1-1,n2,n3),max(LCSof3(a,b,c,n1,n2,n3-1),LCSof3(a,b,c,n1,n2-1,n3)));
    }
}
int LCSof3Topdown(string a, string b, string c, int n1, int n2, int n3)
{
    int dp[n1+1][n2+1][n3+1];
    for(int i=0;i<=n1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n3;k++){
                if(i==0||j==0||k==0) dp[i][j][k] =0;//base condition
            }
        }
    }
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            for(int k=1;k<=n3;k++){
                if(a[i-1] == b[j-1] &&b[j-1] == c[k-1]) dp[i][j][k] = 1+dp[i-1][j-1][k-1];
                else{
                    dp[i][j][k] = max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    return dp[n1][n2][n3];
    
}
int LCSof3Memo(string a, string b, string c, int n1, int n2, int n3)
{
    int dp[n1+1][n2+1][n3+1];
    for(int i=0;i<=n1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n3;k++){
                dp[i][j][k] = -1;
            }
        }
    }
    
    if(n1==0||n2==0||n3==0){
        return 0;
    }

    if (dp[n1][n2][n3] == -1)
    {
        if(a[n1-1] == b[n2-1]&&b[n2-1]==c[n3-1]){
            
            return dp[n1][n2][n3]= LCSof3Memo(a,b,c,n1-1,n2-1,n3-1)+1;
        }
        else{
            return dp[n1][n2][n3]=max(LCSof3Memo(a,b,c,n1-1,n2,n3),max(LCSof3Memo(a,b,c,n1,n2,n3-1),LCSof3Memo(a,b,c,n1,n2-1,n3)));
        }
    }
    else{
        return dp[n1][n2][n3];
    }
  
    
    
}
int main(){
    string s1 = "geeksfor";
    string s2 = "geeks";
    string s3 = "geeksforgeeks";
    cout<<LCSof3Memo(s1,s2,s3,s1.length(),s2.length(),s3.length());

}