#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
vector<int> zigzag(Node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    deque<Node*> st;
    st.push_back(root); 
    while (!st.empty())
    {
        Node* temp = st.front();
        st.pop_front();
        ans.push_back(temp->data);
        if(temp->right){
            st.push_back(temp->right);
        }
        if(temp->left){
            st.push_back(temp->left);
        }
    }
    return ans;
    
    
    
}

int main(){}