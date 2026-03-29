//
// Created by SpaceXe on 2026/3/25.
//

//输入10个整数存入数组，求出其中的最大值和最小值，并输出。



#include <stdio.h>
int main()
{
    int x[10];
    int max, mini;
    
    scanf("%d", &x[0]);
    max = mini = x[0];
    
    for(int i = 1; i < 10; i++)
    {
        scanf("%d", &x[i]);
        if(x[i] > max) max = x[i];
        if(x[i] < mini) mini = x[i];
    }
    
    printf("max is--->%d, mini is--->%d", max, mini);
    return 0;
}