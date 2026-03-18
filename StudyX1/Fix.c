//
// Created by SpaceXe on 2026/3/12.
//
#include <stdio.h>

int main()
{
    /*
        练习：
            用代码拷贝文件
        要求：
            把
                C:\Users\20168\Videos\Captures\Minecraft_ 1.21.4 - 我的世界游戏录屏 2025-01-02 21-20-37.mp4
            拷贝到桌面
    */

    // 1. 打开源文件
    FILE* f1 = fopen("C:\\Users\\20168\\Videos\\Captures\\Minecraft_ 1.21.4 - 我的世界游戏录屏 2025-01-02 21-20-37.mp4", "rb");
    if (f1 == NULL) {
        printf("无法打开源文件！\n");
        return 1;
    }

    // 2. 打开目标文件
    FILE* f2 = fopen("C:\\Users\\20168\\Desktop\\MCplay.mp4", "wb");
    if (f2 == NULL) {
        printf("无法创建目标文件！\n");
        fclose(f1);
        return 1;
    }

    // 3. 循环读取源文件并写入目标文件
    char arr[1024];
    int n;
    while ((n = fread(arr, 1, 1024, f1)) > 0)
    {
        // 把读取的数据写入目标文件
        fwrite(arr, 1, n, f2);
    }

    printf("文件复制完成！\n");

    // 4. 关闭文件
    fclose(f1);
    fclose(f2);

    return 0;
}