#include <stdio.h>

int g[20][20], path[20], n;

int safe(int v, int pos)
{
    if(g[path[pos-1]][v]==0)
        return 0;

    for(int i=0;i<pos;i++)
        if(path[i]==v)
            return 0;

    return 1;
}

int solve(int pos)
{
    if(pos==n)
        return g[path[pos-1]][path[0]];

    for(int v=1;v<n;v++)
    {
        if(safe(v,pos))
        {
            path[pos]=v;

            if(solve(pos+1))
                return 1;

            path[pos]=-1;
        }
    }
    return 0;
}

int main()
{
    printf("enter the number of vertices");
    scanf("%d",&n);
    printf("enter the distance matrix");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&g[i][j]);

    for(int i=0;i<n;i++)
        path[i]=-1;

    path[0]=0;

    if(solve(1))
    {
        for(int i=0;i<n;i++)
            printf("%d ",path[i]);

        printf("%d",path[0]);
    }
    else
        printf("No cycle");
}