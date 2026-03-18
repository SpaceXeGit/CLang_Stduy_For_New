//
// Created by SpaceXe on 2026/3/15.
//

#define Pi 3.14
#include <stdio.h>
int main()
{
    int r;
    float  area;
    for (r=1;r<=10;r++)
    {
        area=Pi*r*r;

        if (area>=100)
            break;
        printf("R=%d,S=%f\n",r,area);
    }
}