//
// Created by SpaceXe on 2026/3/21.
//

#include <stdio.h>
#define Pi 3.14
int main()
{
    double s,r=1;
    double C(double);
    s = Pi *r *r;
    printf("%1f,%1f",s,C(r));
    return 0;
}
#undef Pi

#define Pi 1.11
double C(double r)
{
    return 2*Pi*r;
}