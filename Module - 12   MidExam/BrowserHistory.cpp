#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    string address;
    Node* prev;
    Node* next;
    
    Node(string address){
        this ->address=address;
        this->next=NULL;
        this->prev=NULL;
    }
};
  
Node *current_position=new Node("");

class DoublyLinkedList {
public:
    Node* head =NULL;
    Node* tail=NULL;
    void append(const string& address) {
        Node* newNode = new Node(address);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void visit(const string& address) {
        Node* current = head;
        while (current) {
            if (current->address == address) {
                current_position = current;
                cout << current->address << endl;
                return;
            }
            current = current->next;
        }
        cout << "Not Available" << endl;
    }

    void forward() {
        if(current_position->next!=NULL){
            current_position = current_position->next;
            cout << current_position->address << endl;
        } 
        else {
            cout << "Not Available" << endl;
        }
    }

    void back() {
        if(current_position->prev!=NULL){
            current_position = current_position->prev;
            cout << current_position->address << endl;
        } 
        else {
            cout << "Not Available" << endl;
        }
    }
};

int main() {
    DoublyLinkedList dList;
    string input;

    while (cin >> input && input != "end") 
    {
        dList.append(input);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    string command, address;
    getline(cin, command); 

    size_t pos = command.find(' ');
    address = command.substr(pos + 1);
    dList.visit(address);

    for (int i = 1; i < Q; ++i) 
    {
        getline(cin, command);
        if (command == "next") {
            dList.forward();
        } 
        else if (command == "prev") {
            dList.back();
        } 
        else if (command.substr(0, 5) == "visit") {
            size_t pos = command.find(' ');
            address = command.substr(pos + 1);
            dList.visit(address);
        }
    }
    return 0;
}