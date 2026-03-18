//
// Created by SpaceXe on 2026/3/15.
//
#include <stdio.h>
int main()
{
    int num,i=0,j;
    float sum,average;
    for (i=1;i<=10;i++)
    {
        scanf("%d",&j);
        if (j>0)
        {
        num++;
        sum+=j;
        }
    }
    average=sum/num;
    printf("num is %d,sum is %f,average is %f", num,sum,average);

}