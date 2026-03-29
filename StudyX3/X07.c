//
// Created by SpaceXe on 2026/3/20.
//

#include <stdio.h>
int main()
{
    int max(int a,int b);
    int (*p)(int,int) = max;
    printf("%d",p(2,7));
    return 0;
}
int max(int a,int b)
{
    return a>b?a:b;
}