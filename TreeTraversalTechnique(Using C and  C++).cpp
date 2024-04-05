//written by SRINADHCH07
//code: virtual destructors in inheritance 

#include<iostream>
using namespace std;
class A{
public:
virtual ~A(){
cout<<"hi"<<endl;
}
};
class B:public A
{public :
 virtual ~B()
{
cout<<"hello";
}};
int main(){
B o;
}


#c++
