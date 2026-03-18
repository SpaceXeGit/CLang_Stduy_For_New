//
// Created by SpaceXe on 2026/3/17.
//




#include <stdio.h>
int fabonaicl(int m)
{
    if (m==1||m==2)
        return 1;
    else
        return fabonaicl(m-1)+fabonaicl(m-2);
}
int f(int n)
{
    if (n==0||n==1)
        return 1;
    else
        return f(n-1)*n;
}
void main()
{
    printf("%d",f(5));
    printf("%d",fabonaicl(9));
}