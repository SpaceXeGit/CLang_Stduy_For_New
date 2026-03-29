//
// Created by SpaceXe on 2026/3/29.
//


#include <stdio.h>
int main() {
    FILE *fp;
    int a[5] = {1,2,3,4,5};
    int b[5];
    fp = fopen("data.bin", "______");
    fwrite(a, ______, 5, fp);
    fclose(fp);
    fp = fopen("data.bin", "rb");
    fread(b, sizeof(int), ______, fp);
    fclose(fp);
    for(int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}