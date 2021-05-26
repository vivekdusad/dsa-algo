#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])


int findMinimum(int a[],int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}
int giveOccurence(int a[],int n,int key){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    return count;
}

int maximumDeletes(int a[],int n){
    int min_element = findMinimum(a,n);
    int occurence = giveOccurence(a,n,min_element);
    return n-occurence;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      int n;
      cin>>n;
      int a[n];      
      for(int i=0;i<n;i++){cin>>a[i];}
      cout<<maximumDeletes(a,n)<<endl;
    }

    return 0;
}