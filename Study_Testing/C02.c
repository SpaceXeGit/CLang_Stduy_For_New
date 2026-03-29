//
// Created by SpaceXe on 2026/3/25.
//
//题目：计算 1 + 2 + 3 + ... + 100 的值，并输出结果。


#include <stdio.h>
int main()
{
    int sum;
    int i=0;
    for(i;i<=100;i++)
        sum=i+sum;
    printf("sum is --->%d",sum);
    return 0;
}