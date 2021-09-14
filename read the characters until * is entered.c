#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    system("cls");
    fp = fopen("characters.dat","w");
    if(fp == NULL)
    {
        printf("\n File opening error. ");
        exit(1);
    }
    printf("\n Enter the character: ");
    scanf("%c",&ch);
    while(ch != '*')
    {
        fprintf(fp,"%c",ch);
        scanf("%c",&ch);
    }
    printf("\n Written to the file");
    fclose(fp);
}
