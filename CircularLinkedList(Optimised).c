//Written by SRINADHCH07
//code : Minimized circular link list 

#include<stdio.h>
#include<stdlib.h>
struct n {
    int data;
    struct n*next,*prev;
}*head,*nn,*tail;
void create();
void ie();
void deletion();
void display();
int main() {
    int ch;
    do
    {
        printf("\nMENU\n");
        printf("1.create  2.Deletion  3.Display 4.Exit\nChoose: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    } while(ch!=4);
}
void create() 
{
    int item,ch;
    printf("Enter value :");
    scanf("%d",&item);
    nn=(struct n*)malloc(sizeof(struct n));
    nn->data=item;
    nn->next=nn;
    if(head==NULL)
        head=tail=nn;
    else
    {
        ie();
    }
}
void ie(){
tail->next=nn;
tail=nn;
tail->next=head;
}
void deletion(){
struct n *t1;
t1=head;
while(t1->next!=tail)
t1=t1->next;
free(tail);
tail=t1;
tail->next=head;
}
void display(){
struct n *t1;
if(head==NULL)
printf("Circular link list is Empty ");
else
{
t1=head;
while(t1!=tail)
{
printf("%d->",t1->data);
t1=t1->next;
}
printf("%d->",t1->data);
}
}

#c
