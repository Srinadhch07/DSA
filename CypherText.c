#include<stdio.h>
int main()
{	char message[1000];
	int i,c;
	printf("Select the option Below :\n1.Encrypt\n2.Decrypt\nChoice : ");
	scanf("%d",&c);
	printf("Text : ");
	scanf("%s",message);
	if (c==1){
		printf("Encrypted message :");
		for(i=0;message[i] != '\0';i++){
			printf("%c",message[i]+20);
		}}
	else if(c==2)
	{
	printf("Decrypted message :");
	for (i = 0; message[i] != '\0'; i++) { 
		printf("%c",message[i]-20);	}}
	else
		printf("INVALID OPTION.");
		return 0;
}