#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j,k,n;
    printf("enter the number of rows you want to print\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for(j=1;j<=(n-i);j++)
            printf(" ");
        for ( k= 1; k<=i ; k++)
            printf("* ");  
             
       printf("\n"); 
       
    }
    getch();

}