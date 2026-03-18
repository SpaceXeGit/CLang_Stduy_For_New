//
// Created by SpaceXe on 2026/3/16.
//

#include <stdio.h>
int main()
{
    int y[20],i;
    //  x-1 x x+1
    y[0]=1,y[1]=1;
    for (i=0;i<=20;i++)

    {
        y[i+2]=y[i]+y[i+1];
        printf("%d\n",y[i]);
    }

}