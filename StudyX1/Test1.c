//
// Created by SpaceXe on 2026/3/10.
//


#include <stdio.h>
#include <string.h>

#define pi 3.137598
#include <math.h>
int main()
{
    /*
    printf("%d",strlen("SpaceXe"));

    double a =1,s,c;
    s = pi * a * a;
    c = 2 * pi * a;
    printf("s=%lf,c=%lf",s,c);
    */
    float x,y,z;
    float p,s;
    scanf("%f%f%f",&x,&y,&z);
    p=(x+y+z)/2;
    s=sqrt(p*(p-x)*(p-y)*(p-z));
    printf("%f",s);
    return 0;
}
