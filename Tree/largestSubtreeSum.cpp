#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
class Node{
    public:
    int data;
    Node*left;
    Node*right;
};
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
}
int solve(Node* root){
    if(!root) return 0;
    int leftSum = solve(root->left);
    int rightSum = solve(root->right);
    int totalSum = leftSum+rightSum+root->data;
    return max(leftSum,max(rightSum,totalSum));
}
int findLargestSumUnitll(Node*root,int &ans){
    if(root == NULL){
        return 0;
    }
    int current_sum = root->data+findLargestSumUnitll(root->left,ans)+
    findLargestSumUnitll(root->right,ans);    
    ans = max(ans,current_sum);
    return current_sum;
}
int findLargestSum(Node* root){
    if(!root) return 0;
    int ans = mn;
    findLargestSumUnitll(root,ans);
    return ans;
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(-2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(-6);
    root->right->right = newNode(2);
    cout<<findLargestSum(root);
}