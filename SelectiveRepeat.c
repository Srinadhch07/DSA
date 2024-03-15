#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int size,i,Rec_packets=0,ran;
	printf("Enter the Total data Packets : ");
	scanf("%d",&size);
	ran=rand()%size+1;//this line creates 1 error definatly
	for(i=0;i<size;i++){
	//	ran=rand()%size+1;//for genrating errors this may generate errors but not 100%
		printf("\nSender: Data packet %d has Sending........\n",i+1);
		sleep(1);
		if((i+1)!=ran){
		printf("Receiver:Data packet %d Recieved.\n",i+1);
		Rec_packets++;
	}
	else{
		printf("Receiver :Error Occurred.\nSender:Retransmitting Date Packet %d\n",i+1);
		Rec_packets++;
	}
		printf("Recieved Data packets : %d \n\n",Rec_packets);
	}
	printf("\nAll %d Data Packets are Successfuly received.",Rec_packets);
}