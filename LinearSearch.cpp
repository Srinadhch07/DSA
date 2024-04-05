//written by: SRINADHCH07
//code: linear search with and without recursion 

#include<stdio.h>
int wr( int [],int, int);
int r(int [], int, int);
int main(){
int a[100],n,k,i,d;
printf("NO:");
scanf("%d",&n);
printf("\nElements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("search:\n");
scanf("%d",&k);
//play time
printf("Without recursion\n");
wr(a,n,k);
printf("\nwith recurasion\n");
d=(a,n,k);
if(d=-1)
printf("Element Found");
else 
printf("Element not found ");
}
int r( int a[], int n, int k){
n--;
if(n<0)
return -1;
if (a[n]==k)
return n;
return r(a,n,k);
} 
int wr(int a[], int n, int k){
int flag=0,i;
for(i=0;i<n;i++){
if(a[i]==k)
{
flag=i+1;
break;
}
else
flag=0;
}
if(flag!=0)
printf("Element found");
else 
printf("Element not found ");
}

#c++
