/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{ 
    int n,r,sum=0,num;
    printf("enter the no ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
      r=n%10;  
sum=sum+r*r*r;
        n=n/10;
    }
    if(num==sum)
    printf("%d is armstrong",num);
    else
    printf("%d is not armstrong",num);
    return 0;
}
   



