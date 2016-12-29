#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,s=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        s=s*i;

    }
    printf("factorial of n is %d",s);
    return 0;
}
