#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long

class Node{
    public:
    int data;
    Node* left;
    Node*right;
};
Node* newNode(int key){
    Node* temp = new Node();
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int calculateGrandChildren(Node*root,unordered_map<Node*,int>mp);
int findMaxUntil(Node* root,unordered_map<Node*,int>mp);
int solve(Node* root);


int calculateGrandChildren(Node*root,unordered_map<Node*,int>mp){
    if(root == NULL){
        return 0;
    }
    int sum =0;
    if(root->left){
        sum += findMaxUntil(root->left->left,mp)+findMaxUntil(root->left->right,mp);
    }
    if(root->right){
        sum += findMaxUntil(root->right->left,mp)+findMaxUntil(root->right->right,mp);
    }
    return sum;

}
int findMaxUntil(Node* root,unordered_map<Node*,int>mp){
    if(root == NULL){
        return 0;
    }
    if(mp.find(root) != mp.end()){
        return mp[root];
    }
    int incl = root->data+calculateGrandChildren(root,mp);
    int excl = findMaxUntil(root->left,mp)+findMaxUntil(root->right,mp);
    int sum = max(incl,excl);
    mp[root] = sum;
    return sum;
}

int solve(Node* root){
    if(!root) return 0;
    unordered_map<Node*,int> mp;
    return findMaxUntil(root,mp);
}


int main(){
     Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->left = newNode(4);
    root->right->right = newNode(5);
    root->left->left = newNode(1);
    cout<<solve(root);
}