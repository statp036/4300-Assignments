#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

class Node {
public:
	string data;
	Node *next;
	Node(string s, Node* n = NULL): data{s}, next{n} {}	
};

class Queue{
private:
    Node *front;
    Node *back;
public:
    Queue(): front{NULL}, back{NULL} {}
    bool is_empty();
    void push_back(const string&);
    string pop_front();
    void print_queue();
    ~Queue();
    void operator=(const Queue&) = delete;
    Queue(const Queue&) = delete;
};

//Justin Jiang

Queue::~Queue() {
    while (!is_empty()) {
        pop_front();
    }
}

bool Queue::is_empty(){
    return front == NULL;
}

void Queue::push_back(const string &s){
    if(front == NULL){
        front = back = new Node(s, NULL); 
    }else{
        back = back->next= new Node(s, NULL);
    }
}

string Queue::pop_front(){
    if(is_empty()){
        return "";
    }

    string tempReturn = front->data;

    if (front == back) {
        front = back = NULL;
    } else {
        front = front->next;
    }

    return tempReturn;
        
}

void Queue::print_queue(){
    Node *current = front;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout << endl;
}

int main() {
    Queue x;
    x.push_back("A");
    x.push_back("B");
    x.push_back("C");
    x.print_queue();

    x.pop_front();
    x.push_back("D");
    x.push_back("E");
    x.pop_front();
    x.print_queue();
}

