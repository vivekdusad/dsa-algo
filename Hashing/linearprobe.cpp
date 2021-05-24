
#include <bits/stdc++.h>
#define SIZE 10
using namespace std;

int ha_sh(int key){

    return key%10;

}

int probe(int H[],int key){

    int i= 0;
    int index = ha_sh(key);
    while(H[(index+i)%10] != 0){

        i++;
    }

    return (index+i)%10;

}

void insertHash(int H[],int key){

    int index = ha_sh(key);

   if(H[index] != 0){

       index = probe(H,key);

   }
   H[index] = key;
}

int search(int H[],int key){

    int index = ha_sh(key);

    int i = 0;

    while (H[(index+i)%SIZE] != key )
    {
        i++;
    }
    return (index+i)%SIZE;
    
}


int main(){

    int H[10] = {0};

    insertHash(H,12);
    insertHash(H,15);
    insertHash(H,25);
    insertHash(H,26);

    for(int i=0;i<SIZE;i++){
        cout<<H[i]<<" ";
    }

    cout<<endl;
    cout<<"key found at: "<<search(H,25)<<endl;

}