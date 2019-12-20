/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{ 
    int i,n,fact=1;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
{
   fact=fact*i;
}
printf("%d",fact);
    return 0;
}
