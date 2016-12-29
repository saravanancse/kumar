#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,a[10],n;
    printf("enter the value of a\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<=n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        printf("orginal number is%d\n",a[i]);
    }
    return 0;
}

