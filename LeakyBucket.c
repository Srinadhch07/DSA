#include<stdio.h>
int main()
{
	int b,s=0,in,out,temp;
	printf("Enter Bucket size and Rate :");
	scanf("%d %d",&b,&out);
	while(1){
		printf("\nEnter the Incoming Packets : ");
		scanf("%d",&in);
		printf("Incoming packets : %d\n",in);
			s+=in;
			if(s>=out){
			s-=out;
			printf("Outgoing Packets : %d",out);
		}
			if(s>b){
				temp=s;
				s=b;
				temp-=s;
				printf("\nDropped packets are : %d",temp);
			}
		printf("\nStored Packets : %d\n",s);
	}
	return 0;
}