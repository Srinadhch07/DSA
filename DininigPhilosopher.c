//written by :SRINADHCH07
//CODE: DINING PHILOSOPHER
#include<stdio.h>
#include<unistd.h>
int main()
{       int i;
        for(i=1;i<=5;i++){
                printf("Philospher %d is Thinking !\n",i);
                sleep(1);
                }
        for(i=1;i<=5;i++){
                printf("Philosopher %d is Hungry !\n",i);
                sleep(1);
        }
        for(i=1;i<=5;i++){
                while(i==1 || i==3){
                        printf("Philosopher %d Took Forks %d and %d\n",i,i,i+1);
                        printf("And started Eating !!!\n\n");
                        sleep(2);
                        if(i==3){
                                printf("Philospher %d Placed Down forks\n",i-2);
                                printf("Philosopher %d Started Thinking again !\n\n",i-2);
                                printf("Philospher %d Placed Down forks\n",i);
                                printf("Philosopher %d Started Thinking again !\n\n",i);
                                }break;
                }}
        for(i=0;i<=5;i++){
                while(i==2 || i==4){
                        printf("Philosopher %d Took Forks %d and %d\n",i,i,i+1);
                        printf("And Started Eating !!!\n\n");
                        sleep(1);
                        if(i==4){
                                printf("Philosopher %d Placed Down forks\n",i-2);
                                printf("Philosopher %d Started Thinking again !\n\n",i-2);
                                printf("Philosopher %d Placed Down forks\n",i);
                                printf("Philosopher %d Started Thinking again !\n\n",i);

                        }break;
                }
                while(i==5){
                        printf("Philosopher %d Took Forks %d and %d\n",i,i,i-4);
                        printf("And started Eating \n");
                        sleep(2);
                        printf("Philosopher %d Placed Down forks\n",i);
                        printf("Philosopher %d Started Thinking again !\n\n",i);
                        break;
                }}}
#c
#operating system
