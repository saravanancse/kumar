#include <stdio.h>
#include <conio.h>
int main()
{
    int n[50],i,a;
    printf("enter the value of n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=a-1;i>=0;i--)
    {
        printf("%d",n[i]);

    }
    return 0;
}
