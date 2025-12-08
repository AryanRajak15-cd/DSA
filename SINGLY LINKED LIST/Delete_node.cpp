#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

//Structure of a singly linked list that contain one data field and one next field that contain address of next node.
 struct node
{
  int data;
    node *next;
};

//Declaring some structure type pointer
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp,*prev,*current,*next;

//Initializing some pointer with null
void init()
{
 first=temp=ttemp=null;
}


//Creating first node 
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}

//Adding nod eto linked list
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}


//dispalying the linked list
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}


//Deleting any node in a linked list
void delete_node(int val)
{
   if(first->data==val)
   {
   	temp=first->next;
	first->next=null;
	delete first;
	first=temp;
   }
   else	if(first->next->data==val)
	{
		temp=first->next;
		ttemp=temp->next;
		first->next=ttemp;
		temp->next=null;
		delete temp;
	}
	else{
		temp=first;
	while(temp->next->data!=val)
	{
		temp=temp->next;
			ttemp=temp->next;
	}
		p=ttemp->next;
	temp->next=p;
	ttemp->next=null;
	delete ttemp;
}
}


//Main function
int main(){
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);
    addnode(60);
    delete_node(40);
    disp();
}