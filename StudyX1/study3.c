//
// Created by SpaceXe on 2026/3/13.
//


#include <stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    if (grade>100 || grade<0)
        printf("Error");
    if (grade>=90 && grade<=100)
        printf("A");
    else if (grade>=80 && grade<90)
        printf("B");
    else if (grade>=70 && grade<80)
        printf("C");
    else if (grade>=60 && grade<70)
        printf("D");

    char ch;
    ch=getchar();
    if (ch<32)
        printf("ÊÇ¿ØÖÆ×Ö·û");
    else if (ch>='0' && ch<='9')
        printf("Number");
    else if (ch>='A' && ch<='Z')
        printf("big");
    else if (ch>='a' && ch<='z')
        printf("Small");

    return 0;
}