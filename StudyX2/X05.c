//
// Created by SpaceXe on 2026/3/16.
//
#include <stdio.h>
int main()
{
    int a[10]={5,22,11,67,9,10,4,2,3,1};
    int i,j,t;
    for (j=1;j<=9;j++)
    {
        for (i=0;i<=8;i++)
            if (a[i]<a[i+1])
                {
                    t=a[ i];
                    a[i]=a[i+1];
                    a[i+1]  = t;
                }
    }
    for (i=0;i<=9;i++)
        printf("%d --> ",a[ i]);
    return 0;
}