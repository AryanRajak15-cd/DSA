#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;


/*Structure of a singly circular linked list that contain one data field and one next field that contain address of next node.
One and only additional thing is that the last node points to the first node.*/
struct SCLL
{
  int data;
    SCLL *next;
};
SCLL *first,*temp,*ttemp,*p,*q,*r;


// Initializing some pointer with null
void init()
{
 first=temp=ttemp=null;
}
void createfirst(int val)
{
 first=new SCLL;
  first->data=val;
  first->next=first;
}

// dispalying the linked list
void disp()
{
 temp=first;
 do
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }while(temp!=first);
}

//Main function
int main()
{
    init();
    createfirst(10);
    disp();
}