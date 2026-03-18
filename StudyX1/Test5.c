//
// Created by SpaceXe on 2026/3/14.
//
#include <stdio.h>
int main()
{
    int x=1,a=0,b=0;
    switch (x)
    {
        case 0:b++;
        case 1:a++;
        case 2:a++;b++;
    }
    printf("a=%d,b=%d\n",a,b);

    int i=1,sum=0;
    int i1=1,sum1=0;
    while (i<=100)
    {
        sum+=i;
        i++;
    }
    printf("%d", sum);

    do
    {
        sum1=sum1+i1;
        i1++;
    }while (i1<=100);
    printf("\n%d", sum1);
    return 0;
}