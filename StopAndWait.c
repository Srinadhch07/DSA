#include<stdio.h>
#include<unistd.h>
int main()
{
	int size,i,Rec_packets=0;
	printf("Enter the Total data Packets : ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\nSender: Data packet %d has Sending........\n",i+1);
		sleep(1);
		printf("Receiver:Data packet %d Recieved.\n",i+1);
		Rec_packets++;
		printf("Recieved Data packets : %d \n\n",Rec_packets);
	}
	printf("\nAll %d Data Packets are Successfuly received.",Rec_packets);
}