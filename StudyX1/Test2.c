

//
// Created by SpaceXe on 2026/3/12.
//

#include <stdio.h>

int main()
{
    int a = 2;
    if (a % 2 == 0)
        printf("偶数啊\n");
    else
        printf("China");


    int b,c,d,e,fx,fy;
    b=1,c=2,d=1,e=4;
    fx=++b*c;
    fy=(d++)*c;
    printf("%d\n%d",fx,fy);


    //自增自减
    int i,j;
    i = j = 5;
    printf("i++=%d,j--=%d\n",i++,j--);
    printf("++i=%d,--j=%d\n",++i,--j);
    printf("i++=%d,j--=%d\n",i++,j--);
    printf("++i=%d,--j=%d\n",++i,--j);
    return 0;
}
