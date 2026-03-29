//
// Created by SpaceXe on 2026/3/21.
//



#include <stdio.h>
#define Yes 1
#define No 0

int main()
{
    int a=1,b=1;
    #if Yes
        a++;
    #else
        a--;
    #endif
    printf("%d",a);
}