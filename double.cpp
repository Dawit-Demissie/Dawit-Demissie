/* Doubly LINKED LIST */
#include<iostream>
#include<malloc.h>
#include<cstring>
using namespace std;
struct node
{
char fname[40];
node *link;
node *prev;
}*start = NULL, *temp, *newnode, *toDelBeg, *head; //struct node *start=NULL;
int main()
{
//node *temp,*newnode;
int n;
cout<<"\n\n How many nodes you want:";
cin>>n;
for(int i = 0;i<n;i++)
{
cout<<"\nEnter node info ' Name ' "<<i+1<<":";
newnode = (struct node*)malloc(sizeof(struct node));
cin>>newnode->fname;
newnode->link = NULL;
newnode->prev = NULL;
/*---------/// creation ----------------------*/
if(start == NULL) /*If list is empty*/
start = newnode;
else /* If not empty add at the end */
{ temp = start;
while(temp->link != NULL)
{ temp = temp->link; }
temp -> link = newnode;
newnode -> prev = temp;
}
}
/* To add at the beginning */
cout<<"\n\n Enter a Name you like to add at Beginning : ";
newnode = (struct node*)malloc(sizeof(struct node));
cin>>newnode->fname;
newnode->link = NULL;
newnode->prev = NULL;
newnode->link = start;
start = newnode;
newnode->prev = start; // but could be NULL
/* To add at the End */
cout<<"\n\n Enter a Name you like to Add at the End : ";
newnode = (struct node*)malloc(sizeof(struct node));
cin>>newnode->fname;
newnode->link = NULL;
newnode->prev = NULL;
temp = start;
while(temp->link!=NULL)
{
temp = temp->link;
}
temp->link = newnode;
newnode->prev = temp;
// newnode->link = NULL;
/* To add at any Position in the MIddle */
int i,pos;
cout<<"Enter the position to insert in the middle :\n";
cin>>pos;
cout<<"\n Enter a Name you like : ";
newnode = (struct node*)malloc(sizeof(struct node));
cin>>newnode->fname;
newnode->link = NULL;
newnode->prev = NULL;
temp = start;
for(int i = 1 ; i < pos - 1 ; i++)
{
temp = temp->link;
}
newnode->link = temp->link;
temp->link = newnode;
newnode->prev = temp;
if(temp==NULL)
{
cout<<"\n\n There is no elements at "<<pos;
}
///*****************************************************///
///* To Delete Elements */
////// Delete from Beginning
node *hold;
if(start==NULL)
cout<<"List is Empty\n";
else
{
temp = start;
start = start->link; // Move head pointer to 2
if (start != NULL)
start->prev = NULL; // Remove the link to previous node
free(temp);
cout<<"\n The first Node deleted";
}
//////Delete from nodes position
int postion;
cout<<"\n Enter the position to delete from any position: "<<endl;
cin>>postion;
temp = start;
for(int i= 0;i < postion-1; i++)
{
hold = temp;
temp = temp -> link;
}
hold -> link = temp -> link;
cout<<"\n your position Node deleted";
free(temp);
///////// Delete from the End
temp = start;
while(temp->link!=NULL)
{
hold = temp; // temp is last // hold is 2nd last node
temp = temp->link;
// temp->prev = hold; //?
}
free(temp);
cout<<"\n The last Node deleted";
hold->link = NULL;
/** /* To display the nodes information */
temp = start;
cout<<"\n\n Student Name info:\n";
do
{ if(start == NULL)
{
cout<<"\n\n List is empty";
}
else
{
cout<<"\t"<<temp->fname<<" ";
temp = temp->link;
}
cout<<"\n";
}while(temp != NULL);
}