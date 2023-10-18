#include <iostream>
#include <algorithm>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node()
    {
        data =0;
        next=NULL;
    }
};

int main()
{
node *newnode1= new node;
newnode1->data=10;

node *newnode2=new node;
newnode2->data=20;

node *newnode3=new node;
newnode3->data=30;

node *newnode4=new node;
newnode4->data=40;

newnode1->next=newnode2;
newnode2->next=newnode3;
newnode3->next=newnode4;

cout<<"data1 "<<newnode1->data<<" self address1 "<<newnode1<<" next address "<<newnode1->next<<endl;
cout<<"data2 "<<newnode2->data<<" self address2 "<<newnode2<<" next address "<<newnode2->next<<endl;
cout<<"data3 "<<newnode3->data<<" self address3 "<<newnode3<<" next address "<<newnode3->next<<endl;
cout<<"data4 "<<newnode4->data<<" self address4 "<<newnode4<<" next address "<<newnode4->next<<endl<<endl<<endl;

node *test=newnode1;
while(test!=NULL)
{
    cout<<"data1 "<<test->data<<" self address1 "<<test<<" next address "<<test->next<<endl;
    test=test->next;
}



return 0;
}