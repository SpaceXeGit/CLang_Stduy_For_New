//
// Created by SpaceXe on 2026/3/26.
//


//  输入一个字符串，统计其中大写字母、小写字母、数字的个数。


#include <stdio.h>
#include <string.h>
int  main()
{
        char cha[50];
        int dx=0,xx=0,number=0,i;
        scanf("%s",cha);

        for(i=0;i<strlen(cha);i++)
        {
            if(cha[i]>='a' && cha[i]<='z')
                dx+=1;
            if(cha[i]>='A' && cha[i]<='Z')
                xx+=1;
            if(cha[i]>='0' && cha[i]<='9')
                number+=1;
        }
        printf("dx->%d,xx->%d,number->%d",dx,xx,number);

        return 0;
}