#include<stdio.h>
#include<stdlib.h>
#include <windows.h>



int main()
{
    unsigned int n,i,s;
    printf("enter up to Howmany number you want to print : \n");
    scanf("%d",&n);
    printf("Howmany_seconds of interval you want : ");
    scanf("%d",&s);
    for(i=1;i<=n;i++)
    {
        printf("%d \n",i);
        Sleep(s*1000);

    }
    return 0;
}
