//
// Created by SpaceXe on 2026/3/27.
//
#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp =*x;
    *x = *y;
    *y = temp;
}
int main() {
    int a=3, b=7;
    swap(&a,&b);
    printf("a=%d,b=%d", a, b);
    return 0;
}