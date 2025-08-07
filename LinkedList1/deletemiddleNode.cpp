#include<iostream>
using namespace std;
class Node{     //user defined datatype
public:
    int val; 
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }

    cout<<endl;
}
Node* deletemiddlenode(Node* head){
    Node* temp = head;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    while(temp->next!=slow){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    head = deletemiddlenode(head);
    display(head);
}