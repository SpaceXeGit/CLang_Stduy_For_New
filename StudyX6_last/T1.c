//
// Created by SpaceXe on 2026/3/23.
//

#include <stdio.h>
int main()
{
    int fen,fenx;
    scanf("%d",&fen);
    fenx=fen%10;
    switch (fenx)
    {
        case 9:
        printf("A");
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("E");
            break;
    }


}