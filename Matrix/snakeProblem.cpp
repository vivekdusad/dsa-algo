
#include <iostream>

using namespace std;

void snake(int **a,int m,int n){

    for(int i=1;i<n;i++){
        int j = 0;
        while (j<n)
        {
            if(i%2 == 0){
                j= 0;
                cout<<a[i][j]<<" ";
                j++;
            }
            else{
                j = n-1;
                cout<<a[i][j];
                j--;
            }
        }
        
    }

}

int main(){

    int **a;

    int m = 3;
    int n= 2;
    a = new int *[m];

    for(int i=0;i<m;i++){
        a[i] = new int[n];
    }

    int count = 0; 
    for (int i = 0; i <  m; i++) 
      for (int j = 0; j < n; j++) 
         a[i][j] = ++count;


    // for (int i = 0; i <  m; i++){
    //     for (int j = 0; j < n; j++) {
    //       cout<<a[i][j]<<" ";

    //   }
    //   cout<<endl;
    // } 

    snake(a,m,n);
      
         
        

}