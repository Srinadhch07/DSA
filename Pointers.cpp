//code:
// 1.pointer to array
// 2.pointer to class
#include<iostream>
using namespace std;
class A{
public:
int a;
void hi(){
cout<<"-------         "<<a;
}};
int main(){
int s[100]={1,2,3,4,5};
int i,*z;

A o,*p;
p=&o;
int A::*q=&A::a;
p->*q=30;
p->hi();

for(i=0;i<5;i++){
 z=&s[i];
cout<<"______"<<*z;
}
}

#c++
