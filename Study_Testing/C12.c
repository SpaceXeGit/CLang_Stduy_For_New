//
// Created by SpaceXe on 2026/3/27.



//输入10个整数存入数组，再输入一个要查找的数，
//输出该数在数组中的位置（下标），若不存在则输出 -1。



#include <stdio.h>
int main()
{   
    int a[10];
    int c=0;
    scanf("%d ",&c);
    for(int i=0;i<10;i++)
        scanf("%d",a);
    for(int i=0;i<10;i++)
    {
        if(c==(a[i]))
            printf("xia biao is -->%d",i);
    }


}