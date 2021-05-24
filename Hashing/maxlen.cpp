
#include <bits/stdc++.h>
using namespace std;


int maxlen(int a[],int n,int s){

    int sum = 0;
    unordered_map<int,int> subarraySum;
    int max = 0;
    int res;


    // subarraySum.insert(,);
    for(int i = 0;i<n;i++){

        sum = sum+a[i];

        if(subarraySum.find(sum-s) == subarraySum.end()){

            
            // subarraySum.insert(sum);

            subarraySum.insert({sum,i});
        }
        else{
            res = i-subarraySum[sum];

            cout<<res<<endl;
            if(max<res){
                max = i-subarraySum[sum-s];
                cout<<"max"<<max<<endl;
            }
            if(sum ==s){
                max = i+1;
            }
        }

    }
    return max;

}

int main(){

    int a[] = {8,3,-11};

    int n = sizeof(a)/sizeof(a[0]);

    cout<<maxlen(a,n,0);

}