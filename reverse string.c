#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[50];
    int a,i;
     printf("enter the value of ch\n");
    scanf("%s",ch);
    a=strlen(ch);
    for(i=a-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    return 0;
}
