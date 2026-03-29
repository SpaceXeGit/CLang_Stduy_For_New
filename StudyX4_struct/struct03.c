//
// Created by SpaceXe on 2026/3/20.
//


#include <stdio.h>
#include <string.h>
int main()
{
    struct People
    {
        char name[20];
        int num;
    };
    struct People Pe[3] =
    {
        {"Zhang",0},
        {"Li",0},
        {"wang",0}
    };
    char p[20];
    for (int i=0;i<10;i++)
    {
        scanf("%s",p);
        for (int x=0;x<=2;x++)
        {
            if (strcmp(p,Pe[x].name)==0)
            Pe[x].num++;
        }

    }
    for (int j=0;j<=2;j++)
        printf("%sµÄÆ±ÊýÎª%d\n",Pe[j].name,Pe[j].num);

    return 0;
}