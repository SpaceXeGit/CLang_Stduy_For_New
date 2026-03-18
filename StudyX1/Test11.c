//
// Created by SpaceXe on 2026/3/15.
//

#include <stdio.h>
int main()
{
    int i=1,sum=0;
    logo1:
    if (i<=100)
        sum+=i;
    else
        goto logo3;
    logo2:
        i++;
        goto logo1;
    logo3:
        printf("%d",sum);
}