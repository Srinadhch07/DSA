#include<stdio.h>
int main()
{
	int a[10],b[10],n,i,j,temp,t1;
	printf("Enter the No. of Frames :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the sequence No : ");
		scanf("%d",&a[i]);
		printf("Enter the Content Of %d : ",a[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			t1=b[i];
			b[i]=b[j];
			b[j]=t1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}}}
		printf("Sequence  Content:\n");
	for(i=0;i<n;i++){
		printf("%d\t\t",a[i]);
		printf("%d\n",b[i]);
	}
	return 0;	
}