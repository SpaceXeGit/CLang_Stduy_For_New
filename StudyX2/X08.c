//
// Created by SpaceXe on 2026/3/17.
//

#include <stdio.h>
#include <string.h>
//ÉùÃ÷º¯Êı
void strcatt(char str1[],char str2[]);
void strcpyy(char str1[],char str2[]);
void main()
{
    char str1[10] ="Abc";
    char str2[] = "Def";

    strcat(str1, str2);
    puts(str1);
    puts(str2);
    printf("*****************\n");

    int i,j;
    for (i=0;str1[i]!='\0';i++)
        ;
    for (j=0;str2[j]!='\0';j++,i++)
        str1[i]=str2[j];
    str1[i]='\0';
    puts(str1);
    puts(str2);
    char a[10]="Esg";
    char b[]="English";
    strcatt(a,b);
    puts(a);
    puts(b);

    char x[10]="Amg";
    char y[]="Mercides";
    /*
    strcpy(x,y);
    puts(x);
    puts( y);
    */
    printf("******************\n");
    strcpyy(x,y);
    puts(x);
    puts( y);

    char x1[10]="Mercides";
    char y1[]="Amg";
    strncpy(x1,y1,3);
    puts(x1);
    puts(y1);


}
void strcatt(char str1[],char str2[])
{
    int i,j;
    for (i=0;str1[i]!='\0';i++)
        ;
    for (j=0;str2[j]!='\0';j++,i++)
        str1[i]=str2[j];
    str1[i]='\0';

}
void strcpyy(char str1[],char str2[])
{
    int i;
    for (i=0;str1[i]!='\0';i++)
        str1[i]=str2[i];
    str1[i]='\0';
}