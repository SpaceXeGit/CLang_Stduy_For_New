//
// Created by SpaceXe on 2026/3/18.
//
#include <stdio.h>
void swaps(int *p1, int *p2)
{
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}
void main()
{
    int a=5,b=9;
    int *po1,*po2;
    po1=&a,po2=&b;
    if (a<b) swaps(po1,po2);
    printf("\n%d,%d\n",a,b);

}