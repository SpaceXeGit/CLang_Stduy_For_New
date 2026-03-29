//
// Created by SpaceXe on 2026/3/27.
//


#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p;
    p = (int*)malloc(5 * sizeof(int));
    if(p == NULL) {
        printf("分配失败");
        return 1;
    }
    for(int i=0; i<5; i++) {
        p[i] = i * 2;
    }
    free(p);
    return 0;
}