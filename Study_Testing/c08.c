//
// Created by SpaceXe on 2026/3/26.
//

//定义一个 3×3 的整型矩阵，从键盘输入元素值，计算主对角线元素之和。

#include <stdio.h>
int main()
{

    int jz[3][3]={
        {1,2,3},
        {4,5,6},
        {88,8,11}
                };
    int i=0,j=0;
    int sumx=0,sumy=0;
    for(i;i<=2;i++)
            sumx+=jz[i][i];
    for(int z=0;z<=2;z++)
        sumy+=jz[z][2-z];
        
    printf("sumx-->%d,sumy-->%d",sumx,sumy);
    
    return 0;
}