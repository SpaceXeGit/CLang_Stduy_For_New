//
// Created by SpaceXe on 2026/3/18.
//



#include <stdio.h>

int main()
{
    int i;
    int f(int a);
    for (i =1;i<=3;i++)
        printf("%d",f(i));
    extern int xa,ya;
    printf("%d,%d\n",xa,ya);

}
int f(int a)
{
    static int m;
    m++;
    return a+m;
}
int xa=45,ya=12;