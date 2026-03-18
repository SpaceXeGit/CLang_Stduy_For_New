//
// Created by SpaceXe on 2026/3/14.
//
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if (a%b!=0)
        if (a>b && (a%(a%b))==0)
        {
        c=(a/(a%b));
        printf("%d",c);
        }

    return 0;
}