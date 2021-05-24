
#include <bits/stdc++.h>
using namespace std;
int maxSubstr(string s,int i,int j){
	    if(i>j) return -1;
	    //recursion
	    int res = 0;
	    int sub_res0 = 0;
	   int sub_res1 = 0;
	    for(int k=i;k<j;k++){	        
	        if(s[k] =='1') {
                sub_res1 = sub_res1+ 1;                
            }
	        else if(s[k] =='0') {
                sub_res0=sub_res0+ 1;                
            }
	    }
        
	    res = sub_res0-sub_res1;
        // cout<<res<<endl;
	   if(sub_res0==0) return -1;
	   else{
	        return max(res,max(maxSubstr(s,i+1,j),maxSubstr(s,i,j-1)));
	   }
}
int main(){
    string  S = "11000010001" ;    
    cout<<maxSubstr(S,0,S.length());

}