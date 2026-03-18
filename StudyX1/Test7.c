//
// Created by SpaceXe on 2026/3/14.
//

#include <stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d%d",&a,&b);
    if (a<b)
    {
        t = a;
        a = b;
        b = t;

    }
    c=a%b;
    while (c!=0)
    {
        a = b;
        b = c;
        c = a%b;

    }
    printf("MaxNumber is %d",b);


    /*

    int a,b,c,t;
    scanf("%d%d",&a,&b);
    if (a<b)
    {
        t = a;
        a = b;
        b = t;

    }
    c=a%b;
    while (c!=0)
    {

        c = a%b;
        a = b;
        b = c;

    }
    printf("MaxNumber is %d",a);
    */
    return 0;
}