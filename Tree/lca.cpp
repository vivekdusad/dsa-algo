#include<bits/stdc++.h>
using namespace std;
// #define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
#define print(x) cout<<x
class Node{public:int data;Node*right;Node*left;};
Node* newNode(int key){
    Node*temp = new Node();
    temp->data = key;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}
bool findPath(Node *root, vector<int> &path, int k)
{
    // base case
    if (root == NULL) return false;
 
    // Store this node in path vector. The node will be removed if
    // not in path from root to k
    path.push_back(root->data);
 
    // See if the k is same as root's key
    if (root->data == k)
        return true;
 
    // Check if k is found in left or right sub-tree
    if ( (root->left && findPath(root->left, path, k)) ||
         (root->right && findPath(root->right, path, k)) )
        return true;
 
    // If not present in subtree rooted with root, remove root from
    // path[] and return false
    path.pop_back();
    return false;
}
Node* lca(Node* root ,int n1 ,int n2 ){
    vector<int>path1;
    vector<int>path2;  
   if(findPath(root,path1,n1)|| findPath(root,path2,n2)){
       return NULL;
   }    
    int i;
    for (i = 0; i < path1.size() && i < path2.size() ; i++)
        if (path1[i] != path2[i])
            break;
    return newNode(path1[i-1]);   
       
}
int main(){
    Node*root = newNode(5);
    root->left = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    lca(root,3,4);
}