//code:linear search with recursion

#include<stdio.h>
int r(int a[],int n, int key){
n--;
if (n<0){
return -1;
}
if(a[n]==key){
return n;
}
return r(a,n,key);
}
int main(){
int arr[100],n,key,i,pos;
printf("Enter no of elements:");
scanf("%d",&n);
printf("eneter no. of elemnts ;");
for( i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
printf("SEARCH:");
scanf("%d", &key);
pos=r(arr,n,key);
if(pos!=-1){
printf("Element found ");
}
else{
printf("Element not found ");
}}
    
    
 #c++
