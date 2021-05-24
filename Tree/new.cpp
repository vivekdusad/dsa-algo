
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
void inorder(TreeNode* node){
    stack<TreeNode*> stk;
    while (!stk.empty() || node == NULL)
    {
        /* code */
        if(node != NULL){
            stk.push(node);
            node = node->left;
        }else{
            TreeNode* temp = stk.top();
            stk.pop();
            cout<<temp->data;
            node = node->right;
        }
    }
    
}
void preorder(TreeNode* node){
     stack<TreeNode*> stk;
    while (!stk.empty() || node == NULL)
    {
        /* code */
        if(node != NULL){
            stk.push(node);
            cout<<node->data;
            node = node->left;
        }else{
            TreeNode* temp = stk.top();
            stk.pop();
            // cout<<temp->data;
            node = node->right;
        }
    }

}


int main(){

}