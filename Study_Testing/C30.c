//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
int main() {
    int a[3][4] = {1,2,3,4,     5,6,7,8,     9,10,11,12};
    int (*p)[4] = a[3][4];
    printf("%d", *(*(p+2)+3));
    return 0;
}