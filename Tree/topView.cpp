#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
vector<int> topView(Node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<pair<Node*,int>> level_order;
    map<int,int> mp;
    level_order.push({root,0});
    while (!level_order.empty())
    {
        Node* temp = level_order.front().first;
        int distance = level_order.front().second;
        if(mp.find(distance) == mp.end()){
            mp[distance]= temp->data;
        }

        if(temp->left){
            level_order.push({temp->left,distance-1});
        }
        if(temp->right){
            level_order.push({temp->right,distance+1});
        }
    }
    for(auto i = mp.begin();i!= mp.end();i++){
        ans.push_back(i->second);
    }
    
}

int main(){}