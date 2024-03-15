#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int n,i;
printf("Enter the No. of Strings :");
scanf("%d",&n);
printf("Enter Strings :\n");
for(i=0;i<n;i++)
{
	scanf("%s",&str[i]);
}
printf("Character Stuffing:\nFlag");
for(i=0;i<n;i++){
	printf("%s",str[0]);
}
printf(" Flag ");

}