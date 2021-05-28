#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define mn INT_MIN
#define mx INT_MAX
#define lli long long int
#define ll long long
#define fl(start,end) for(int i=start;i<end;i++)
class Node{public:int data;Node*right;Node*left;};
Node* newNode(int key){
    Node*temp = new Node();
    temp->data = key;
    temp->right = NULL;
    temp->left = NULL;
}
void printVector(vector<int> path,int j){
    fl(0,j) cout<<path[i]<<"";
}
void printPath(Node*root,vector<int> &path,int key){
    if(!root) return ;
    path.push_back(root->data);
    printPath(root->left,path,key);
    printPath(root->right,path,key);

    int flag = 0;
    for(int i=size(path)-1;i>=0;i--){
        flag += path[i];
        if(flag == key){
            printVector(path,i);
        }
    }
    path.pop_back();
}
void solve(Node* root,int key){
    if(root == NULL) return ;
    vector<int> path;
    printPath(root,path,key);
}


int main(){
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}