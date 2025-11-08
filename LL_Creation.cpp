#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node(int data) {
        this->data= data;
        this->next=nullptr;
    }
};

class LinkedList {

    public:
        node* head;
        LinkedList() {
            head=nullptr;
        }
        void add(int data) {
            node *newNode=new node(data);
            if(head==nullptr) {
                head=newNode;
            }
            else {
                node* temp=head;
                while(temp->next!=nullptr) {
                    temp=temp->next;
                }
                temp->next=newNode;
            }
        }
        void display(){
            node* temp=head;
            while(temp->next!=NULL) {
                cout << temp->data << "->";
                temp=temp->next;
            }
            cout << temp->data << endl;
        }

};

int main() {
    LinkedList LL;
    LL.add(2);
    LL.add(7);
    LL.add(1);
    LL.add(2);
    cout << "Display of the LinkedList:- ";
    LL.display();
    return 0;
}