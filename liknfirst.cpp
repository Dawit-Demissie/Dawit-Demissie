# include<iostream>
using namespace std;
struct student{
	char name[20];
	int id;
	float CGA;
	student *next;
};
student * createNode();
void insertFirst();
void display();
student * head =NULL;
int main(){
insertFirst();
display();	
}
student *createNode(){
	student *st=new student;
	cout<<"Enter the student name:";
	cin>>st->name;
	cout<<"Enter student id:";
	cin>>st->id;
	cout<<"Enter the student CGA";
	cin>>st->CGA;
	st->next=NULL;
	return st;
}
void insertFirst(){
	student *st=createNode();
	if(head==NULL)
	head=st;
	else{
	st->next=head;
	head=st;
	}
}
void display(){
	if(head==NULL)
	cout<<"\n no data in list.";
	else{
	student *temp=head;
	while(temp!=NULL){
		cout<<"name is:"<<temp->name;
		cout<<"id is:"<<temp->id;
		cout<<"CGA"<<temp->CGA;
		temp=temp->next;
	}
	}
}