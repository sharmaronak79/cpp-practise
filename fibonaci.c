
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n,a=0,b=1,c;
    printf("Enter a limit of fibonaci series : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("%d , ",a);
        c=a+b;
        a=b;
        b=c;

    }
     printf("%d ",a);
    return 0;
}