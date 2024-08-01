#include<stdio.h>

int minm(int a,int b)
{
    return(a<b?a:b);
}

void floyd(int D[][10],int n)
{
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    D[i][j]=minm(D[i][j],D[i][k]+D[k][j]);
}

int main()
{
    int n,c[10][10];
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the cost matrix:");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&c[i][j]);
    floyd(c,n);

    printf("All pair shortest path:\n");
    for(int i=1;i<=n;i++)
    {             
        for(int j=1;j<=n;j++) 
            printf("%d  ",c[i][j]); 
        printf("\n"); 
    } 
}