// ... existing code ...
#include <stdio.h>
int main()
{
    /*
    short a=-1;
    printf("%u",a);
    */
    char ch = 'a';
    printf("%d\n",ch);
    char ch2 = 97;
    printf("%c",ch2,"\n");
    printf("%d",sizeof("Hellow"),"\n");
    printf("abc\nMps");
    printf("abc\tMps\n");
    printf("********\n");
    printf("abcd\rMpbs");
    printf("\a\a\a\a\a\a\a\a\a");
    /*  换行符 \n
     *  水平间隔符 \t
     *  垂直间隔符 \v
     *  退格符 \b
     *  回车符 \r
     *  换页符 \f
     *  响铃符 \a
     *  反转义符 \\
     *  单引号 \'
     *  双引号 \""
     *  3 位 8 进制 \ooo
     *  2 位 16 进制 \xhh
     */
    return 0;
}
