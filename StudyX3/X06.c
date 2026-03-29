//
// Created by SpaceXe on 2026/3/19.
//


#include <stdio.h>
int main()
{
    int fas[3][4]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    int i,j,(*po1)[4];
    po1=fas;
    printf("Scanf your i j i will tell");
    scanf("%d",&i);
    scanf("%d",&j);

    printf("fas[%d][%d]=Value is %d",i,j,*(*(fas+i)+j)) ;
    //printf("%d",*&po1[2][3]);
    return 0;
}