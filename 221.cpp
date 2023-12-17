//Zigzag traversal


#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void zigzagTraversal(node* root){
    if(root==NULL)return;
    stack<node*>currLevel;
    stack<node*>nextLevel;
    bool leftToRight=true;
    currLevel.push(root);
    while(!currLevel.empty()){
        node* temp=currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(leftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            //Right to left
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }

        if(currLevel.empty()){
            leftToRight=!leftToRight;
            swap(currLevel,nextLevel);
        }
        
    }
}

void preOrder(node *root){
    if(root==NULL)return;

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}



int main(){
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);
    //test
    zigzagTraversal(root);
    
  
    return 0;
}






