#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

struct node
{
    node* left;
    node*right;
    int data;
};

int lisRec(node*root){
    if(root==NULL)
        return 0;
    int node_excl = lisRec(root->left)+lisRec(root->right);
    int node_incl = 1;
    if(root->left)
        node_incl += lisRec(root->left->left)+lisRec(root->left->right);
    if(root->right)
        node_incl += lisRec(root->right->left)+lisRec(root->right->right);
    return max(node_excl,node_incl);   
}
int lisDp(node* root,unordered_map<node*,int> dp){
    //memotized
    
    if(root==NULL)
        return 0;
    if(dp.find(root) != dp.end()){
        return dp[root];        
    }
    int node_excl = lisRec(root->left)+lisRec(root->right);
    int node_incl = 1;
    if(root->left)
        node_incl += lisRec(root->left->left)+lisRec(root->left->right);
    if(root->right)
        node_incl += lisRec(root->right->left)+lisRec(root->right->right);
    return dp[root] = max(node_excl,node_incl);   

}

int main(){
    unordered_map<node*,int> dp;

}