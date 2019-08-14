//linkedlist.cpp
//Diba Mirza

#include <iostream>
using namespace std;

struct Node{
	Node(int value): data(value), prev(nullptr), next(nullptr){}
	int data;
	Node* prev;
	Node* next;
};

class LinkedList{

public:
	LinkedList():head(nullptr), tail(nullptr){
        //initialization list
        //1. shorthand used when writing constructors
        //2. Only way to initialize const member variables
	}
	void append(int value);
	//Add a integer to the end of the list
	void remove(int value);
	int sum();
	void reverse();
	bool find(int value);
	int count(int value);
	//returns the number of occurences of the value
	int length();
	bool isempty();
	void print();
private:
	Node* head;
	Node* tail;	
};

void LinkedList::append(int value){
	//Empty case
	//Node n1; //Wrong because n1 is on the stack
	         // and n1 will be removed after append
			 // returns
	Node* p = new Node(value);

	if (!head && !tail){
				head = p;
		tail = p;
	} else if(head ==tail){
		head->next = p;
		tail = p;
		p->prev = head;
	} else {
		p->prev = tail;
		tail->next = p;
		tail = p;
	}

}

void LinkedList::print(){
	Node* tmp = head;
	while(tmp){
		cout<<tmp->data<< " ";
		tmp = tmp->next;
	}
	cout<<endl;
}

void foo(){
	LinkedList list;
	list.append(10);
	list.append(20);
	list.append(30);
	list.print();
	// With the default destructor this code has a memory leak
}

int main(){

	foo();

	return 0;
}

