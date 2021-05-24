
#include <iostream>

using namespace std;


void booleanMatrix(){

}

int main(){

    int m,n;
    m = 3;
    n = 3;
    int a[m][n] = {
                    {0,0,0},
                    {0,1,0},
                    {1,0,0}
                };

    int row[3] = {0,0,0};
    int colm[3] = {0,0,0};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] == 1){
                colm[j] = 1;
                row[i] = 1;
            }
        }
    }

    // for(int i=0;i<m;i++){
    //     cout<<row[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     cout<<colm[i]<<" ";
    // }

    for (int i = 0; i < m; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
            if ( row[i] == 1 || colm[j] == 1 ) 
            { 
                a[i][j] = 1; 
            } 
        } 
    } 



    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    
    
    

    

}