//Written by SRINADHCH07
//Code : Single linked list 

#include<stdio.h>
void cl();
void dl();
void ds();
struct n
{

    int data;
    struct n*next;



}*head=NULL;
void insbeg()

{ int data,w;


    struct n*t;
    t=(struct n*)malloc(sizeof(struct n*));
    if(t==NULL)
        printf("\n unable to insert \n");
    else
    {
printf("\nEnter value : ");
scanf("%d",&w);
                t->data=w;
        t->next=head;
        head=t;



        printf("\n ONE NODE IS INSERTED\n");


    }
}
void insend()

{
int v;
printf("Enter the value :");
scanf("%d",&v);
    struct n*nn;
    nn=(struct n*)malloc(sizeof(struct n));
    nn->data=v;
    nn->next=NULL;
    if(head==NULL)
    {

        head=nn;
    }
    else
    {
        struct n *t=head;
        while(t->next!=NULL)
            t=t->next;
        t->next=nn;
    }
    printf("NEW NODE INSERTED ");

}
void im(int data, int p)
{

    int i;
    struct n * nn,*t;
    nn=(struct n*)malloc(sizeof(struct n));

    if(nn==NULL)
    {
        printf("Unable to alloacte memory 😒");


    }
    else
    {



        nn->data=data;
        nn->next=NULL;
        t=head;
        for(i=0; i<p; i++)
        {
            t=t->next;
            if(t==NULL)
                break;
        }
        if(t!=NULL)
        {
            nn->next=t->next;
            t->next=nn;
            printf("\nSuccessfully inserted 😉\n");


        }
        else
        {
            printf("\nUnable to allowcte memory\n");
        }



    }



}
void  db()
{
    struct n*t;
    if(head==NULL)
    {
        printf("\nLIST IS EMPTY\n");

    }
    else
    {


        t=head;
        head=head->next;
        printf("Data Deleted =%d\n",t->data);
        free(t);
        printf("\nSuccessfully deleted 😉\n");

    }

}

void de()
{

    struct n*t1,*t2;
    if(head==NULL)
        printf("LIST IS EMPTY!");
    else
    {
        t1=t2=head;
        while(t1->next!=0)
        {

            t2=t1;
            t1=t1->next;
        }

        if(t1==head)
        {
            head=NULL;


        }
        else
        {
            t2->next=NULL;
        }
        free(t1);
        printf("One node is deleted!\n");
    }
}

void dm(int w)
{
    /*

    int i;
    struct n*t1,*t2;

    t1=head;
    for(i=0;i<w;i++)
    {


    t2=t1;
    t1=t1->next;
    }
    t2->next=t1->next;

    free(t1);


    printf("\nSuccessfully deleted 😉\n");*/
    printf("Work in progress:");

}







void main()

{

    int n,b,v,data,p,w;
    printf("Enter the Numbers of nodes: ");
    scanf("%d",&n);

    printf("Creating the list:  \n");
    cl(n);
    printf("Displaying the list \n");
    dl();
start:
    printf("\nCHOOSE THE LIST :\n");
    printf("1.Insert beginning.\n2.Insert end\n3.Insert middle\n4.Delete beginning.\n");
    printf("5.Delete End\n6.Delete middle \n7.Display\n8.Exit\n\n\n\tTYPE :");



    scanf("%d",&b);
    if(b==3)
    {
        printf("Enter the data and position : ");
        scanf("%d %d",&data,&p);

    }
    else if(b==6)
    {
        printf("Enter the position of node :   ");
        scanf("%d",&w);


    }
    printf("\n\n");

    switch(b)

    {
    case 1:
        insbeg(v);



        goto start;
    case 2:
        insend(v);

        goto start ;
    case 3:

        im(data,p);
        goto start ;
    case 4:
        db(v);

        goto start;
    case 5:
        de(v);

        goto start;
    case 6:
        dm(w);
        goto start;
    case 7:
        dl();
        goto start;
    case 8:
        exit(0);
    default:
        printf("CHOOSE CORRECTLY\n");
        goto start;
    }



}
void cl(n)
{
    struct n*nn,*t;
    int data,i;
    head=(struct n*)malloc(sizeof(struct n));
    if(head==NULL)
        printf("Unable to allocate memory \n");
    else
        printf("Enter the data in node 1 :  ");
scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    t=head;
    for(i=2; i<=n; i++)
    {
        nn=(struct n*)malloc(sizeof(struct n));
        if(nn== NULL)
            printf("Unable to allocate memory!");
        else
        {
            printf("Enter the data in node %d:   ",i);
            scanf("%d",&data);
            nn->data=data;
            nn->next=NULL;
            t->next=nn;
            t=t->next;
        }

    }
    printf("\nSingle linked list is created !\n");

}

void dl()
{

    struct n*t;
    t=head;
    if(head==NULL)
        printf("List is empty!\n");
    else
    {
        printf("List :\n");
        while(t!=NULL)
        {
            printf("%d\t",t->data);

            t=t->next;


        }

    }

}


#c++
