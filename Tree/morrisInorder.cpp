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

void morris(Node* root){
    Node*prev;
    Node*curr;
    if(!root){
        return;
    }
    curr = root;
    while (curr != NULL){
        if(curr->left == NULL){
            cout<<curr->data;           
            curr = curr->right;
        }
        else{
            prev = curr->left;
            while(prev->right != NULL&&prev->right != curr){
                prev = prev->right;
            }
            if(prev->right == NULL){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                cout << curr->data; 
				curr = curr->right;                 
            }
        }
    }
    
}

void solve(){}


int main(){
     Node* root = newNode(4); 
	root->left = newNode(2); 
	root->right = newNode(5); 
	root->left->left = newNode(1); 
	root->left->right = newNode(3); 
	morris(root); 
	return 0; 
}