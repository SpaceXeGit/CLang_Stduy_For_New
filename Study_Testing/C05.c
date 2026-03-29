//
// Created by SpaceXe on 2026/3/25.
//


//编写一个函数 int isPrime(int n)，
//判断一个整数是否为素数。在主函数中输入一个整数，调用该函数并输出结果。

//在C语言中，判断一个数是否为质数（素数）是一个常见的编程任务。
//质数是指除了1和它本身以外，不能被其他任何整数整除的数。例如，
//29是一个质数，因为它不能被2到28之间的任何整数整除。

#include <stdio.h>
int main()
{
    int i;
    int isPrime(int n);

    scanf("%d",&i);

    isPrime(i);
}
int isPrime(int n)
{
    for (int i=2;i<n;i++)
    {
        if(n%i!=0 && n%2!=0)
        {
        printf("������");break;
        }
        else {printf("����������");break;}
    }

}