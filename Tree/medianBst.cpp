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
    return temp;
}
int countNoOfNodes(Node* root){
    Node*curr;
    Node*prev;
    int count=0;
    if(root == NULL) return -1;
    
    curr = root;
    while (curr != NULL)
    {
        if(root->left ==NULL){
            count++;
        }
        else {
            prev = curr->left;
            while (prev->right != NULL&&prev->right != curr)
            {
                prev = prev->right;
            }
            if(prev->right==NULL){
                prev->right = curr;
                curr = curr->left;
            }else{
                prev->right = NULL;
                count++;                
            }            
        }
    }
    return count;
    
}



int median(Node*root){
    //if root == NULL
    if(root == NULL) return -1;

    //count no. of nodes
    int n = countNoOfNodes(root);
    return n;
}


int main(){
    Node* root = newNode(4); 
	root->left = newNode(2); 
	root->right = newNode(5); 
	root->left->left = newNode(1); 
	root->left->right = newNode(3); 
	cout<<median(root); 
	return 0;
}