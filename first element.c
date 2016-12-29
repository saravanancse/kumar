#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,a[10],n,flag=0;
    printf("enter the value of a :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    i=0;

        for(j=1;j<n;j++)
        {

            if(a[i]==a[j])
            {
              flag=1;
            }}
            if(flag==1)
            {
                printf("first element is repeated\n");
            }
            else{
                printf("first element is not repeated");
            }
    return 0;
}

