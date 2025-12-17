#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#define null 0
using namespace std;

// Structure of a doubly linked list that contain one data field, one previous field that contain address of previous node, and one next field that contain address of next node.
struct dll
{
    int data;
    dll *prev, *next;
};
// Declaring some structure type pointer
dll *first, *temp, *ttemp, *p, *q, *r, *ptemp, *pttemp,
    *ntemp, *nttemp, *prev, *current, *next;

// Initializing some pointer with null
void init()
{
    first = temp = ttemp = null;
}

// Creating first node
void createfirst(int val)
{
    first = new dll;
    first->data = val;
    first->next = null;
    first->prev = null;
}

// dispalying the linked list
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}

//Function to add nodes
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;
  }
  ttemp=new dll;
  ttemp->data=val;
  ttemp->next=null;
  ttemp->prev=temp;
  temp->next=ttemp;
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
    addnode(60);
    disp();
}