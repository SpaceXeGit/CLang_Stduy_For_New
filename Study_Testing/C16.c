//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
int main() {
    int a[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i=0; i<5; i++) {
        sum += a[i];
    }
    printf("sum=%d", sum);
    return 0;
}