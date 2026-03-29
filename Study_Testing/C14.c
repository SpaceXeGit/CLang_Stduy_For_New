//
// Created by SpaceXe on 2026/3/27.
//输入一个字符串，将其反转后输出。例如输入 "hello"，输出 "olleh"


#include <stdio.h>
#include <string.h>
int main()
{
    char ch[]="AsmlPower";
    int i=strlen(ch);
    char ch1[30];
    int x=0;
    for(i;i>=0;i--)
    {   
        ch1[x]=ch[i];
        x++;
    }
    puts(ch1);

    return 0;

}