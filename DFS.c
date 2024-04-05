//Code : DFS program 

#include<stdlib.h>
#include<stdio.h>
void dfs(int );
int g[10][10],vis[10],n,vtx[10];
int main() {
    int i,j;
    printf("Enter No. of vertices:");
    scanf("%d",&n);
    printf("Enter the vertices :");
    for(i=0; i<n; i++) {
        scanf("%d",&vtx[i]);
    }
    printf("Enter the Adjacent matrix :");
    for(i=0;i<n;i++)
    for(j=0; j<n; j++) {
        scanf("%d",&g[i][j]);
    }
    for(i=0; i<n; i++)
        vis[i]=0;
        dfs(0);
}
void dfs(int i)
{
int j;
printf(" %d-> ",vtx[i]);
vis[i]=1;
for(j=0;j<n;j++)
if(vis[j]!=1&& g[i][j]==1)
dfs(j);
}
