#include<stdio.h>
int main()
{
    int m,n,z;
    printf("Enter the number of rows, m=");
    scanf("%d",&m);
    printf("Enter the number of columns, n=");
    scanf("%d",&n);
    z=m*n;
    if(z%6==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
return 0;
}