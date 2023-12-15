#include<iostream>
using namespace std;
//this is a basic structure of singly linked list 
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//create a list 
node* create(int data){
    int data;
    cin>>data;
    //ek check laga lo agr ye pahla node hai jo ki empty hai
    if(node->data==NULL){
        return new node(data);
    }
    else
    node* temp=new node(data);
}
int main(){
    node* head;
    // i have to create a list first 
    
}