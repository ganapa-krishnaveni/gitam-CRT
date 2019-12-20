/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{ 
    int n,x1=0,x2=1,x,i;
    printf("enter the no of  terms");
    scanf("%d",&n);
    printf("%d\t%d\t",x1,x2);
    for(i=3;i<=n;i++)
{
   x=x1+x2;
printf("%d\t",x);
x1=x2;
x2=x;
}
    return 0;
}
