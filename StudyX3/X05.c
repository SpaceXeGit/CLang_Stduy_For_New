//
// Created by SpaceXe on 2026/3/19.
//


#include <stdio.h>
#include <string.h>

void main()
{
    char *p,*q;
    p = "Hellow World Fucking";
    q=p;
    while (*p!='\0')
        putchar(*p++);

    printf("\n%d",strlen(q));

}
