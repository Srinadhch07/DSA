//written by SRINADHCH07
//code ;tree traversal techniques with c and c++ 
/*code desrciption :1.checking  class and struct has  same properties*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class  n{
public:
int data;
class n*l;
class n*r;
};
class  n *nn( int data){
class n *n=(class n*)malloc(sizeof(class n*));
n->data=data;
n->l=NULL;
n->r=NULL;
return (n);
}
void post(class n*n){
if(n==NULL)
return;
post(n->l);
post(n->r);
printf("%d  ",n->data);
}
void  ino(class n *n){
if(n==NULL)
return;
ino(n->l);
printf("%d  ",n->data);
ino(n->r);
}
void pre(class n *n){
if(n==NULL)
return;
printf("%d  ",n->data);
pre(n->l);
pre(n->r);
}
int main(){
class  n *r=nn(3);
r->l=nn(2);
r->r=nn(5);
r->l->r=nn(6);
r->l->l=nn(0);
r->r->l=nn(8);
r->l->r->r==nn(7);
printf("\nPreorder traversal \n");
pre(r);
printf("\n\nINorder treaversal \n");
ino(r);
printf("\n\nPOst order traversal \n");
post(r);
} 
    

#c
#c++
