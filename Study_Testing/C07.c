//
// Created by SpaceXe on 2026/3/26.
//


//编写函数 void swap(int *a, int *b)，
//交换两个整数的值。在主函数中输入两个数，
//调用函数交换后输出。

#include <stdio.h>
int main()
{
    void swap(int *a,int *b);


    swap(4,7);
    return 0;
}
void swap(int *a,int *b)
{   
    int *c;
    c=a;
    a=b;
    b=c;
    printf("Change one and two is --One-->%d,two is -->-->%d",a,b);

}