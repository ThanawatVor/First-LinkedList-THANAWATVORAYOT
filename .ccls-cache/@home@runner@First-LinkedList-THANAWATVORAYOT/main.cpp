#include <iostream>
using namespace std;
#include "node.h"

typedef int integer;

int i;

typedef node* nodePtr;
 int main() {

int x=5;
node a,b,*head;
a.value = x;
a.next=&b;
head=&a; 
b.value=head->value+3; 
  node* temp=head;
cout <<temp->value<<endl;
cout<<temp->next->value<<endl;
  node c;
   //connect b to c  // temp
   //1. using b   b.next=&c;
   //2. using a
   a.next->next=&c;
   //3. using temp
   temp->next->next=&c;
  c.value =11;
  cout<<temp->next->next->value<<endl; //should print 11
   int i;
   for(i=0;i<3;i++){
    cout<<temp->value<<endl; // print 5
   temp=temp->next; //8 (B)
   }

   temp=head;
   for(i=0;i<3;i++){
     head=head->next;
     cout<<"deleting "<<temp->value<<endl;
     delete temp;
     temp=head;
   }
  //how to move temp to the next one?


   
  
   
}