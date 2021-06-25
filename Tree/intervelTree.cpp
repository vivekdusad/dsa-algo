#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
class Intervel{public:int low;int high;};
class Node{public:Intervel *i;Node*left;Node*right;int max;};
Node* newNode(Intervel *i){
    Node*temp = new Node();
    temp->i = i;
    temp->max = i->high;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}


Node* intervelTree(Node*root,Intervel *i){
    if(root == NULL){
        return newNode(i);
    }
    if(i->low<root->i->low){
        root->left = intervelTree(root->left,i);
    }
    else{
        root->right = intervelTree(root->right,i);
    }
    if(root->max<i->high){
        root->max = i->high;
    }
    return root;
}
bool doOVerlap(Intervel i1, Intervel i2)
{
    if (i1.low <= i2.high && i2.low <= i1.high)
        return true;
    return false;
}
Intervel *overlapSearch(Node*root,Intervel i){
    if(root == NULL){
        return NULL;
    }
    if(doOVerlap(*(root->i),i)){
        return root->i;
    }
    if(root->left != NULL&&root->max>=i.low){
        return overlapSearch(root->left,i);
    }
    return overlapSearch(root->right,i);
}


int main(){}