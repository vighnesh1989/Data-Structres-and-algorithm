/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int countbinaryset(int a)
{
    int i,bitlength,count=0;
    bitlength=8*(sizeof(a));
    for(i=0;i<bitlength;i++)
    {
        if (a & (1<<i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int a=7,count=0;
    count=countbinaryset(a);
    printf("\ncount=%d",count);
    return 0;
}
