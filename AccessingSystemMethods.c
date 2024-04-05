//code : Accesing Dir(), rmdir(),opendir()
#include<stdio.h>
#include<dirent.h>
#include<sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
int main()
{
        char d[10];
        int c,op;
        DIR *e;
        struct dirent *sd;
        printf("Menu\n1.create\n2.Remove\n3.Read\nEnter Your choice: ");
        scanf("%d",&op);
        switch(op)
        {
                case 1:
                printf("Enter Dir Name :");
                scanf("%s",d);
                c=mkdir(d,1);
                if(c==1)
                printf("Dir is not created ");
                else
                printf("Dir is created ");
                break;
                case 2:
                printf("Enter Dir name:");
                scanf("%s",d);
                c=rmdir(d);
                if(c==1)
                printf("Dir not found");
                else
                printf("Dir is Removed");
                break;
                case 3:
                printf("Enter the dir name : ");
                scanf("%s",d);
                e=opendir(d);
                if(e==NULL)
                printf("Dir is empty ");
                else
                {
                printf("Dir Exist\n");
                while((sd=readdir(e))!=NULL)
                printf("%s\n",sd->d_name);
                }
                closedir(e);
                break;
                }
                return 0;
}

#c
#operatingSystem
