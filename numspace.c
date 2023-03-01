/*
   1
  123
 12345
12345678
*/
#include<stdio.h>
void main()
{
    int n,i,j,sp;
    printf("enter a number of rows\n");
    scanf("%d",&n);
    for(i=4;i<=1;i--)
    {
        for(sp=n;sp>i;sp--)
        {
            printf(" ");
        }
           for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}