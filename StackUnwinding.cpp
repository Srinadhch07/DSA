//code: stack unwinding example 

#include<iostream>
using namespace std;
void f1() throw( int)
{
cout<<"\nf1 started ";
throw 100;
cout<<"\nf1 closed ";
}
void f2() {
cout<<"\nf2 started ";
f1();
cout<<"\nf2 closed ";
}
void f3(){
cout<<"\nf3 started";
try{

f2();
}
catch (int i){
cout<<"\nexception locked :"<<i;
}

cout<<"\nf3 closed";
}
int main()
{
f3();

}

#c++
