//Written by SRINADHCH07
//code : Minimized Double link list 

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
    nn->next=NULL;
    nn->prev=NULL;
    if(head==NULL)
        head=tail=nn;
    else
    {
        ie();
    }
}
void ie(){
tail->next=nn;
nn->prev=tail;
tail=nn;
}
void deletion(){
struct n *t1;
t1=tail;
printf("Deleted element is %d",tail->data);
t1=tail->prev;
free(tail);
tail=t1;
tail->next=NULL;
}
void display(){
struct n *t1;
if(head==NULL)
printf("DOUBLE  link list is Empty ");
else
{
t1=head;
while(t1!=NULL)
{
printf("%d->",t1->data);
t1=t1->next;
}
}
}

#c
