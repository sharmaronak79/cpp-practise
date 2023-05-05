/* if a number is equal to its sum of individual digit's factorial like 145=1!+4!+5! then it is storng number*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,fact,sum=0,r,i,x;
    printf("Enter Number to check Storng or Not : ");
    scanf("%d",&n);
    x=n;
    
    while(n>0)
    {
        fact=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
     if(x==sum)
    {
        printf("\n %d is a strong number",x);
    
    
    }
    else
    {
        printf("\n %d is not a strong number",x);
    }
    return 0;
}
