
#include <bits/stdc++.h>

using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d){
        d = data;
    }
};

int countNodes(TreeNode* head){
    if(head == NULL){
        return 0;
    }
    int leftCount = countNodes(head->left);
    int rightCount = countNodes(head->right);
    return (leftCount+rightCount+1);
}
int SumNodes(TreeNode* head){
    if(head == NULL){
        return 0;
    }
    int leftSum = SumNodes(head->left);
    int rightSum = SumNodes(head->right);
    return (leftSum+rightSum+head->data);
}

int heightNodes(TreeNode* head){
    if(head == NULL){
        return 0;
    }
    int left = heightNodes(head->left);
    int right = heightNodes(head->right);
    
    return max(left,right)+1;
}
int leafNodes(TreeNode* head){
    if(head == NULL){
        return 0;
    }
    if(head->left == NULL&&head->right == NULL){
        return 1;
    }
    int left = leafNodes(head->left);
    int right = leafNodes(head->right);
    
    return left+right;
}
int NotSiblingNodes(TreeNode* head){
    if(head == NULL){
        return 0;
    }
    if(head->left == NULL^head->right== NULL){
        return 1;
    }
    int left = NotSiblingNodes(head->left);
    int right = NotSiblingNodes(head->right);
    
    return max(left,right)+1;
}

void levelOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
        /* code */
        TreeNode* p = q.front();
        q.pop();
        if(p->left != NULL ){
            q.push(p->left);
        }
        if(p->right != NULL ){
            q.push(p->right);
        }
        
    }
    
}
bool isBalanced(TreeNode* root){
    if(root == NULL){
        return true;
    }
    if(abs(heightNodes(root->left)-heightNodes(root->right))>1){
        return false;
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    return left&&right;
}
TreeNode* removeLeafNode(TreeNode* root){

    if(root == NULL){
        return NULL;//base case
    }
    if(root->left == NULL&&root->right == NULL){
        return NULL;
    }
    
    root->left=removeLeafNode(root->left);
    root->right=removeLeafNode(root->right);

}
int main(){

}