#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#define null 0
using namespace std;

/*Structure of a singly circular linked list that contain one data field and one next field that contain address of next node.
One and only additional thing is that the last node points to the first node.*/
struct SCLL
{
    int data;
    SCLL *next;
};
SCLL *first, *temp, *ttemp, *p, *q, *r;

// Initializing some pointer with null
void init()
{
    first = temp = ttemp = null;
}
void createfirst(int val)
{
    first = new SCLL;
    first->data = val;
    first->next = first;
}

// dispalying the linked list
void disp()
{
    temp = first;
    do
    {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != first);
}

// Function to add nodes
void addnode(int val)
{
    temp = first;
    while (temp->next != first)
    {
        temp = temp->next;
    }
    ttemp = new SCLL;
    ttemp->data = val;
    ttemp->next = first;
    temp->next = ttemp;
}


// Function to delete a given node
void delete_node(int val)
{
   if(first->data==val)
   {
   	 temp=first;
	ttemp=first->next;
	while(temp->next!=first)
	{
        temp=temp->next;
	}
	temp->next=ttemp;
	first->next=null;
	delete first;
	first=ttemp;
   }
   else	if(first->next->data==val)
	{
		temp=first->next;
		ttemp=temp->next;
		first->next=ttemp;
		temp->next=first;
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
        ttemp->next=first;
        delete ttemp;
    }
}

// Main function
int main()
{
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);
    delete_node(10);
    disp();
}