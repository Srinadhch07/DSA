#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,add,n;
	printf("Enter the No. of Bits : \n");
	scanf("%d",&n);
	printf("Enter Bits : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	add=rand()%2;
	printf("After Bit Stuffing :\n%d",add);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("%d",add);
	
	return 0;
}