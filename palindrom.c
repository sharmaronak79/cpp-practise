
#include<stdio.h>
#include<stdlib.h>

/*a number which is same from reverse is called a palindrom number
li 2552 if we count from reverse then again is 2552 , so it is palindrome number*/

int main()
{
    int r, n,temp, sum=0;
    printf("Enter a number to check palindrom : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    if (temp==sum)
    {
        printf("number %d is a palindrom number ",temp);
    }
    else
    {
        printf("number %d is not a palindrom number ",temp);

    }
    
    return 0;
}