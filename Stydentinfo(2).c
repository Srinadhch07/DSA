/Written by SRINADHCH07
//Code : alla data types in  a program 
#include<iostream>
using namespace std;
typedef int sri;
class student
{
public:
    char a[50];
    struct
    {
        sri r;
        union percentage
        {
            float p;

        } u[5];
    } s[5];

}c[5];

int main()
{

 sri i,b[5];


cout<<"Enter the information \n";
for(i=0;i<2;i++)

{


cout<<"\n\nEnter Name:  ";
cin>>c[i].a;
cout<<"\nEnter Roll no :  ";
cin>>c[i].s[i].r;
cout<<"\nEnter percentage:  ";
cin>>c[i].s[i].u[i].p;
cout<<"\nEnter The Address :  ";
cin>>b[i];
}
cout<<"\n\nData:\n\n";
for(i=0;i<2;i++)
{

cout<<"\nName : "<<c[i].a;
cout<<"\nRoll No :  "<<c[i].s[i].r;
cout<<"\nPercentage :  "<<c[i].s[i].u[i].p<<"%\n";
cout<<"Adress  :  "<<b[i];




}
}

#c++
