//
// Created by SpaceXe on 2026/3/27.
//：用宏定义 #define AREA(r) 3.14*r*r 计算圆的面积。输入半径，输出面积。


#include <stdio.h>
#define AREA(r) 3.14*r*r

int main()
{
    float a;
    scanf("%f",&a);
    printf("%f",AREA(a));
    return 0;
}