//
// Created by SpaceXe on 2026/3/26.
//将以下数据写入文件 data.txt："C语言程序设计\n"，
//然后读取该文件并显示在屏幕上。



#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("D:/CodeX/CLion/Study/Study_Testing/data.txt","wb");
    char a[20]="C语言程序设计\n";
    fwrite(a,4,8,f);

    return 0;
}