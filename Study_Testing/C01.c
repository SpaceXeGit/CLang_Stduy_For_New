//
// Created by SpaceXe on 2026/3/25.




//编写程序，从键盘输入两个整数，输出它们的和、差、积、商（商保留两位小数）。

#include <stdio.h>
int main()
{
    
    int a,b,sum,cha,ji;
    float shang;
    float a1,b1;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum is ->%d\n",sum);
    cha=a-b;
    printf("(a-b)cha is ->%d\n",cha);
    ji=a*b;
    printf("ji is -->%d\n",ji);
    a1=a,b1=b;
    shang=a1/b1;
    printf("shang is --->%.2f",shang);
    return 0;

}




