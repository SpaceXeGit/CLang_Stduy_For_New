//
// Created by SpaceXe on 2026/3/16.
//
#include <stdio.h>
#define N 6

int main()
{
    int a[N],b['B'-60],c[]={1,2,3,4,5,6},i;
    for (i=0;i<N;i++)
        scanf("%d%d",&a[i],&b[i]);
    for (i=0;i<N;i++)
    {
        printf("a[i]%d ",a[i]);
        printf("b[i]%d",b[i]);
    }
    printf("\n");
    for (i=0;i<N;i++)
        c[i]=a[i]+b[N-i-1];
    for (i=0;i<N;i++)
        printf("c[i]%d ",c[i]);
}
