//
// Created by SpaceXe on 2026/3/16.
//
#include <stdio.h>
int main()
{
    int i,j;
    int sum_j=0,sum_i=0;
    int Fs[5][4]=
    {
        {12,4,6,22},
        {8,23,3,24},
        {15,7,9,31},
        {2,5,17,24},
        {37,39,25,111},
    };
    for(i=0;i<5;i++)
    {
        sum_i+=Fs[i][i];
        for (j=0;j<4;j++)
            sum_j+=Fs[i][j];
    };
    printf("%d,%d",sum_i,sum_j);
    return 0;
}