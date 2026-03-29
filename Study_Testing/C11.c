//
// Created by SpaceXe on 2026/3/27.
//


//编写递归函数 int factorial(int n)
//计算 n!，在主函数中输入 n 并输出结果


#include <stdio.h>
int main()
{
    int factorial(int n);
    int s;
    scanf("%d",&s);
    printf("%d",factorial(s));

}

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return((factorial(n-1)*n));

}