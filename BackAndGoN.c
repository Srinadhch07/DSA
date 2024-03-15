#include<stdio.h>
int main()
{
int frame,temp,size,i,ack=0;
printf("Enter No. of Frames and window size : \n");
scanf("%d %d",&frame,&size);
for(i=1;i<=size;i++){
	printf("Receiver: Frame %d Transmitted\n",i);\
}
	while(1){
	printf("\nSender:Enter Last acknowledment : ");
	scanf("%d",&ack);
	if(ack!=frame){
		printf("\nReceiver: Frame %d Transmitted",ack+1);
	}
	else{
		printf("Sender:All Frames are Transmitted\nReceiver:All Frames Are Received.");
		break;
	}}
	return 0;
}