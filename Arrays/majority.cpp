
#include <iostream>

using namespace std;


int majorityWins(int arr[], int n, int x,int y)
{
    // ce here
    
    int count[2] = {0,0};
    
    
    
    
    
    
    for(int i=0;i<n;i++){
        
        if(arr[i] == x){
            count[0]++;

            cout<<count[0]<<endl;
        }
        else if(arr[i] == y){
            count[1]++;
            cout<<count[1]<<endl;
        }
        
        
                
    }
    if(count[0]>count[1]){
        return x;
    }
    else if(count[0]<count[1]){
        return y;
    }
    else{
        if(x>y){
            return y;
        }
        else if(x<y){
            return x;
        }
        else{
            return -5;
        }
        
    }
    
    
    
}

int main(){

    int x,y;
    x = 29;
    y = 96;

    int arr[] = {5,22,29,12,32,69,1,75};

    cout<<majorityWins(arr,8,x,y);

}
