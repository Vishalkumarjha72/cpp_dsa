#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data = val;
			next = NULL;
		}
};

void insertattail(node* &head,int val){ //head is choosen here by referene as we are modifing our linked list
	node* n = new node(val);
	
	if(head==NULL){
		head =n;
		return;
	}
	
	node* temp=head;
	while(temp->next !=NULL){
		temp= temp->next;
	}
	temp->next=n;
}

void display(node* head){ //head is choosen here by value as we are not modifing our linked list
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
	}
	
void insertathead(node* &head, int val){
	node* n= new node(val);
	n->next=head;
	head = n;
}
bool search(node* head , int key){
	node* temp= head;
	while(temp!=NULL){
		if(temp->data == key){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

void deleteathead(node* &head){
	node*todelete = head;
	head= head->next;
	
	delete todelete;
}


void deletion(node* &head, int key){
	
	if(head==NULL){
		return;
	}
	if(head->next==NULL){
		deleteathead(head);
		return;
	}
	
	node* temp = head ;
	while(temp->next->data!=key){
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next=temp->next->next;
	delete todelete;
}
node* reversebyiteration(node* head){ //incomplete hai yehhhhhhhhhhhhhhhhh!!!!!!!!!!!!!!!
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	
	while(currptr!=NULL){
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
	}
	return prevptr;
}


int main(){
	node* head= NULL;
	insertattail(head,4);
	insertattail(head,3);
	insertattail(head,5);
	insertattail(head,5);
	insertattail(head,2);
	display(head);
	insertathead(head,23);
	display(head);
	cout<<search(head,5)<<endl;
	deletion(head,3);
	display(head);
	deleteathead(head);
	display(head);

	
}
