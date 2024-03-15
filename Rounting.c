//writetn by: SRINADHCH07
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int router,i=0,j,distance[100],d2[100],routers[100],r1,source,packets,temp,t1,count=1,error=0;
	printf("Enter the No. Router :");
	scanf("%d",&router);
	for(i=0;i<router;i++)
	{
		printf("\nEnter the Distance of Router %d: ",i+1);
		scanf("%d",&distance[i]);
		d2[i]=distance[i];
		routers[i]=i+1;
	}
	printf("\nEnter the No. of Data Packets : ");
	scanf("%d",&packets);
	error=rand()%packets+1;
	printf("Preparing Routers Map , Please Wait.\n");
	printf("Sending Datagram from Source Host\n\n");
	sleep(2);
	for(int s=0;s<router;s++){
	distance[s]=0;
	printf("\nRouter %d :\n",s+1);
	printf("\nPath %d :",s+1);
	for(i=0;i<router;i++)
	{
		for(j=i+1;j<router;j++)
		{
			if(distance[i]>distance[j])
			{	t1=d2[i];
				d2[i]=d2[j];
				d2[j]=t1;
				temp=distance[i];
				distance[i]=distance[j];
				distance[j]=temp;
				//settig routers odrder
				r1=routers[i];
				routers[i]=routers[j];
				routers[j]=r1;
			}
		}
		printf("R%d (%d)->",routers[i],distance[i]);
		
		distance[i]=d2[i];
	}
	for(i=0;i<packets;i++)
		{
			//error=rand()%packets+1; multiple traffic jam point
			if((i+1)==error)
			{
				printf("\nTraffic Detected changing path.\n");
				sleep(2);
				error=0;
				break;	
			}
			else if (count==packets)
			{
				printf("\nAll Packets are Deliveered to Destination Host.");
				exit(0);
			}
			printf("\nMoving Packets.");
			count++;
			
		}
	
	}
	return 0;
}
