
#include <bits/stdc++.h>
using namespace std;
vector<string> fx(pair<string, int>* v,int n){
    int local_max =0;
    int global_max = INT_MIN;
    vector<string> result;

    for (int i = 0; i < n; i++)
    {
        local_max = max(local_max+v[i].second,v[i].second);
        result.push_back(v[i].first); 
        if(local_max>global_max){
            global_max = local_max;
            
        }
        if(local_max<0){
            local_max=0; 
            result.pop_back();
        } 
             
    }
    return result;
    
}
int main(){
    pair<string, int> arr[] = { { "geeks", 4 },
                                { "for", -3 },
                                { "geeks", 2 },
                                { "tutorial", 3 },
                                { "program", -4 } };
    vector<string> a= fx(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i <a.size(); i++)
    {
        /* code */
        cout<<a[i];
    }
    

}