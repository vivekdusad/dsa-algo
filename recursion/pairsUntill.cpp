
#include <iostream>

using namespace std;

void pairsUntill(string a[],int n,string output,int num){

    if(num == 0){
        cout<<output<<endl;
    }

    for (int i = 0; i < a[num%10].length(); i++)
    {
        pairsUntill(a,n,output+a[num%10][i],num/10);
    }
    
}

int main(){

    string a[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int n = sizeof(a)/sizeof(a[0]);

    pairsUntill(a,n,"",234);

}