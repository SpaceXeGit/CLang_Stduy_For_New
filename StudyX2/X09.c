//
// Created by SpaceXe on 2026/3/17.
//

#include <float.h>
#include <string.h>

#include <stdio.h>

void strlwrX(char lenx[]);
int main()
{
    int ax;
    char a[]="abCe";
    char b[]="abCeD";
    char c[]="abce";
    char d[]="abCe";
    ax = strcmp(a,d);
    printf("%d\n",ax);

    int a1=strlen(a);
    printf("%d",a1);

    strlwr(a);
    puts(a);
    strupr(a);
    puts(a);
    char lenx[]="ABCDEsdasno";
    int i;
    for (i=0;lenx[i]!='\0';i++)
        lenx[i]=  lenx[i]>='A' && lenx[i]<='Z' ? lenx[i]+32 : lenx[i];
    puts(lenx);

    strupr(lenx);
    puts(lenx);
    return 0;
}
