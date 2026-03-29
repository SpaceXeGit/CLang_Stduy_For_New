//
// Created by SpaceXe on 2026/3/21.
//

#include <stdio.h>
#include <string.h>

int main()
{
    struct
    {
        int fas;
        double hel;
        char c[5];
    }m={4,5.4,"abc"};
    struct
    {
        char c[3];
        double lo;
        float s;
        char ow;

    }Fx;

    union
    {
        int a;
        double b;
        char c[5];
    }n;
    n.a=4;
    n.b=4.6;
    strcpy(n.c,"abc");
    printf("%d,\n%d,\n",m.fas,n.a);
    printf("%d----->>>>>%d",sizeof(m),sizeof(n));
    printf("\n%d-------->>>>>>",sizeof(Fx));
}