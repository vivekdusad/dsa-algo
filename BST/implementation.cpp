#include<iostream>
using namespace std;
class Node{
public:
	Node* lchild;
	Node* rchild;
	int data;
};
class BST{
public:
	Node* root;
	
	BST();
	void insert(int key);
	Node* search(int key);
	Node* getRoot(){ return root; }
	void Inorder(Node* p);
	Node* Delete(int key);
	
};
BST::BST(){
	root = nullptr;
}
void BST::insert(int key){
	 Node* t = root;
    Node* p;
    Node* r;
 
    // root is empty
    if (root == nullptr){
        p = new Node;
        p->data = key;
        p->lchild = nullptr;
        p->rchild = nullptr;
        root = p;
        return;
    }
 
    while(t != nullptr){
        r = t;
        if (key < t->data){
            t = t->lchild;
        } else if (key > t->data){
            t = t->rchild;
        } else {
            return;
        }
    }
    p = new Node;
    p->data = key;
    p->lchild =NULL;
    p->rchild =NULL;
    if(key >r->data){
    	r->rchild = p;
    }
    else if (key<r->data){
    	r->lchild = p;
    }
    else{
    	return;
    }


}
Node* BST::search(int key){
	Node* p = root;
	while(p != nullptr){
		if(p->data >key){
			p = p->lchild;

		}
		else if(p->data<key){
			p = p->rchild;
		}
		else{
			return p;
		}

	}
	return NULL;

}
void BST:: Inorder(Node* p){
	if(p != nullptr){
		Inorder(p->lchild);
		cout<<p->data<<" ";
		Inorder(p->rchild);
	}

}
Node* BST::Delete(int key){
	Node* r;
	Node* p;
	p = root;
	while(p){
		r=p;
		if(p->data>key){
			p = p->lchild;
		}
		else if(p->data<key){
			p = p->rchild;

		}
		else{
			if(r->data>key){
				r->lchild = NULL;
			}
			else{
				r->rchild = NULL;
			}
			return p;
		}
		
	}
	return NULL;
}
int main(){
	BST bst;
	bst.insert(20);
	bst.insert(30);
	bst.insert(40);
	bst.insert(10);
	bst.insert(8);
	bst.Inorder(bst.getRoot());
    cout << endl;
    Node* temp = bst.Delete(40);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
    bst.Inorder(bst.getRoot());
    cout << endl;
}