#include<stdio.h>
int dist[10],cost[10][10],n;

int minm(int m,int n)
{
    return (m<n?m:n);
}

void dijk(int source)
{
    int s[10]={0};
    int min,w=0;
    int i,j;
    for(i=0;i<n;i++)
    dist[i]=cost[source][i];

    dist[source]=1;
    s[source]=1;
    for(i=0;i<n-1;i++)
    {
        min=999;
        for(j=0;j<n;j++)
        {
            if(s[j]==0 && (min>dist[j]))
            {
                min=dist[j];
                w=j;
            }
        }
        s[w]=1;
        for(int v=0;v<n;v++)
        {
            if(s[v]==0 && cost[w][v]!=999)
            {
                dist[v]=minm(dist[v],dist[w]+cost[w][v]);
            }
        }
    }
}
     
int main() 
{ 

    int source; 
                
    printf("Enter the no.of vertices:"); 
    scanf("%d",&n); 
    printf("Enter the cost matrix\n"); 
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) 
            scanf("%d",&cost[i][j]); 
         
    printf("Enter the source vertex:"); 
    scanf("%d",&source); 
    dijk(source); 
         
    printf("the shortest distance is..."); 
    for(int i=0; i<n; i++) 
        printf("Cost from %d to %d is %d\n",source,i,dist[i]); 
} 