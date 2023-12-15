#include<iostream>
using namespace std;

// Node class definition
class node{
public: 
    int data;
    node* left, *right;

    // Constructor to initialize a node with given data
    node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};

int main(){
    // Create a root node with data 10
    node* root = new node(10);

    // Display the data of the root node
    cout << "Root Data: " << root->data << endl;

    // Create a left node with data 20
    root->left = new node(20);

    // Display the data of the left node
    cout << "Left Data: " << root->left->data << endl;

    // Don't forget to free the allocated memory for both nodes
    delete root->left;
    delete root;

    return 0;
}
