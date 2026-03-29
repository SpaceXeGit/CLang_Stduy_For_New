//
// Created by SpaceXe on 2026/3/25.
//

// 输入一个年份，判断它是否为闰年。闰年条件：
// 能被4整除但不能被100整除，或者能被400整除。


#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if ((x%4==0 &&  x%100!=0) ||    x%400==0 )
    {
    printf("is run year");
    }
    else
        printf("is not run year");
    return 0;
}