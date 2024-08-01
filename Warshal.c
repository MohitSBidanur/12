#include<Stdio.h>

void Warshal(int A[][10],int n)
{
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    A[i][j]=A[i][j]||(A[i][k]&&A[k][j]);
}

void main()
{
    int n,adj[10][10];
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&adj[i][j]);

    Warshal(adj,n);
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
    {
    printf("%d ",adj[i][j]);
    
    }
    printf("\n");
    }

}