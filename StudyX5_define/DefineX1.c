//
// Created by SpaceXe on 2026/3/21.
//


#define Pi 3.1415

#include <stdio.h>
int main()
{
    float Fas(float r);
    float s;
    scanf("%f", &s);
    printf("%f",Fas(s));

}
float Fas(float r)
{
    return Pi*r*r;
}