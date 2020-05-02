
#include<stdio.h>
#include<stdlib.h>

/* A number which has only two factors like 1 and it self,
prime number is called Avibhajya in gujarati */

int main()
{
    int i, n, count =0;
    printf("Enter a number to check prime or not : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("number %d is a prime number",n);
    }
    else
    {
        printf("number %d is not a prime number",n);
    }
    

    
    return 0;
}