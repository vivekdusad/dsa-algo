#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
class Node{public:int data;Node*right;Node*left;};
Node* newNode(int key){
    Node*temp = new Node();
    temp->data = key;
    temp->right = NULL;
    temp->left = NULL;
}


bool prime(int n){
    if(n<2) return false;
    for(int i=2;(i*i)<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
vector<int> findFactors(int n){
    vector<int> factors;
    for(int i=2;i*i<n;i++){
        if(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if(n>1) factors.push_back(n);
    return factors;
}


int main(){}