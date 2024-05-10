/* Create binary tree by second mathod .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left , *right ;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

// create a function for binary tree.

 Node* CreateBinary(){
    int n;
    
    cin>>n;

    if(n==-1) return NULL;
    Node *temp = new Node(n);

    cout<<"Enter the left child of "<<n <<" ";
    temp->left = CreateBinary();
    cout<<"Enter the right child of "<<n << " ";

    temp->right = CreateBinary();
    return temp;
 }
int main(){

    Node* root ;
    cout<<"Enter your root element : ";
    root = CreateBinary();
    
}