
#include <bits/stdc++.h>
using namespace std;

class TrieNode{
    TrieNode *child[26];
    bool isEnd;
    TrieNode(){
        isEnd = false;
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
    void Insert(string s);
    int Search(string s);
    void Delete(string s);
};
TrieNode* root
void TrieNode:: Insert(string s){
    //insert function in trie

}
int TrieNode:: Search(string &s){
    //seatch function
    
}
void TrieNode::Delete(string s){
    //delete function
}

int main(){

}