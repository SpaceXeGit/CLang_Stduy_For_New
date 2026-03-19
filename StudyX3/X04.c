//
// Created by SpaceXe on 2026/3/19.
//
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},*p=a,i;
    for (i=0;i<=4;i++)
        printf("%d%s,%p hase=%d\n",i,"P(i=Pace=",&p[i],p[i]);
    return 0;
}