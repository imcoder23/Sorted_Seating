#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};


class linked_list
{
private:
	node *head, *tail;
public:
	linked_list(){
		head = NULL;
		tail = NULL;
	}

void add_value(int n){
	node *temp = new node;
	temp -> data = n;
	
	node *node_traverasal = new node;	
		node_traverasal = head;
		if(head == NULL){
			head = temp;
			tail = temp;
		}
		// else{

		// 	tail->next = temp;
		// 	tail = tail->next;
		// }

		while(node_traverasal!= NULL){
				if(node_traverasal->data < n){
					
					temp->next = node_traverasal->next;
					node_traverasal->next = temp;
				}
			node_traverasal = node_traverasal->next;
			}
		
}

void displayInBetween(int n){

	while(head!= NULL){
		if(head->next->data == n) {
			cout << head->data <<endl;	
			cout << head->next->next->data <<endl;
	}
		head =head->next;
	} 
}


};



int main(){
	linked_list a;
	a.add_value(12);
	a.add_value(22);
	a.add_value(20);
	a.add_value(13);	
	a.displayInBetween(20);
}

