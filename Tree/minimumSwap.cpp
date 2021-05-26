#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
class Node{
    public:
        int data;
        Node*left;
        Node*right;
        // Node(int d);
};

Node* convertToTree(int arr[],int n){
    Node* root;
    root->data = arr[0];
    // root->left = 
}

void inorder(int arr[],vector<int>v,int index,int n){
    if(index>=n){
        return;
    }
    //pushing left subTree
    inorder(arr,v,2*index+1,n);
    //pushing root
    v.push_back(arr[index]);
    //pushing right sub tree
    inorder(arr,v,2*n+2,n);
}

int minimumSwap(int arr[],int n){
    vector<int> _inorder;
    inorder(arr,_inorder,0,n);
    sort(arr,arr+n);
    
    
}

int main(){}