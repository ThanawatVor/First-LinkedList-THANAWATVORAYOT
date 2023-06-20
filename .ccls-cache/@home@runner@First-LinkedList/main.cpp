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
cout <<temp->value;
cout<<temp->next->value;
  node c;
   //connect b to c
   //1. using b
   //2. using a
   //3. using temp

   
   
   
  //how to move temp to the next one?


   
  
   
}