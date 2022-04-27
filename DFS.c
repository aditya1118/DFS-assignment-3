#include<stdio.h>
int a[10][10],n,v,visited[10];
void main()
{
printf("Enter the value starting vertex");
scanf("%d",&v);
printf("Enter the no of vertices");
scanf("%d",&n);
printf("Enter the Adjecency Matrix");
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{ 
    scanf("%d",&a[i][j]);
}
for(int i=1;i<=1;i++)
{
    visited[i]=0;
} 
DFS(v);
}
}

void DFS(int v)
{
visited[v]=1;
printf("%d",v);
for(int i=1;i<=1;i++)
{
    if(a[v][i]==1&&!visited[i])
    {
        DFS(i);
    }
}
}
