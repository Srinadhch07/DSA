//lcode: linear search without recursion 
#include<stdio.h>
int search( int [], int , int );
int main(){
int a[100],key,n,i;
printf("How many elements ");
scanf("%d",&n);
printf("Enter Elemnts :\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("SEARCH:\n");
scanf("%d",&key);
search(a,n,key);
}
int search( int a[], int n, int key){
int flag=0,i;
for(i=0; i<n;i++){
if (a[i]==key)
{
flag=i+1;
break;
}
else
flag=0;
}
if(flag!=0)
{
printf("Element found ");
}else 
printf("not found ");
}

#c++
