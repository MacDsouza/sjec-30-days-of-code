#include<stdio.h>
int main()
{
int a,b,i;
printf("Enter the first number, a=");
scanf("%d",&a);
printf("Enter the second number, b=");
scanf("%d",&b);
if(a<b && 1<=a && b<=10000)
    {
        for(i=a;i<=b;i++)
        if(i%3==0)
        {
            printf("Foo \n");
        }
        else if(i%2==0 && i%3!=0)
        {
            printf("Bar \n");
        }
        else if(i%2!=0 && i%3!=0)
        {
            printf("Baz \n");
        }
    }
    else
    {
        printf("INVALID \n (ENTER NUMBERS RANGING FROM 1-10000(inclusive) AND a<b)");
    }
return 0;    
}