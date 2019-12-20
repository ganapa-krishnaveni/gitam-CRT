/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{ 
    int n,r,max=0;
    printf("enter the no ");
    scanf("%d",&n);
    do
    {
   r=n%10;
  if(r>max)
  max=r;
  n=n/10;
    }
    while(n!=0);
    printf("%d",max);
    return 0;
}
        

    



