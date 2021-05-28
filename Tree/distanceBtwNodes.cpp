#include<bits/stdc++.h>
using namespace std;
// #define size(x) sizeof(x)/sizeof(x[0])
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
    return temp;
}
bool findPath(Node *root, vector<Node*> &path, int k)
{
    // base case
    if (root == NULL) return false;
 
    // Store this node in path vector. The node will be removed if
    // not in path from root to k
    path.push_back(root);
 
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
    vector<Node*>path1;
    vector<Node*>path2;  
   if(findPath(root,path1,n1)|| findPath(root,path2,n2)){
       return NULL;
   }    
    int i;
    for (i = 0; i < path1.size() && i < path2.size() ; i++)
        if (path1[i]->data != path2[i]->data)
            break;
    return path1[i-1];
       
}


int solve(Node*root,int n1,int n2){
    //find lca
    Node*_lca = lca(root,n1,n2);    
    int dis_n1;     
    int dis_n2; 
    //findDistanceFromLca
    if(!Dist(_lca,n1,dis_n1)|| !Dist(_lca,n2,dis_n2)){
       return -1;
    } 
    return dis_n1+dis_n2;   
    
}


int main(){
    
}