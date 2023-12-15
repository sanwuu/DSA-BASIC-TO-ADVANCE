#include<iostream>
using namespace std;
//this is a basic structure of singly linked list 
class list{
    public:
    int data;
    list* next;
    list(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    list* head=new list(10);
    cout<<head->data<<endl;
    cout<<head->next;
    
}