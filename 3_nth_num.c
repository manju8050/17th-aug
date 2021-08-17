#include<stdio.h>

void main()
{
    int num,n,nth;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Enter a bit number:");
    scanf("%d",&n);

    nth = (num>>n)&1;

    printf("the %d  bit is set to %d",n,nth);
    
    
}

//
Enter a number:12
Enter a bit number:2
the 2  bit is set to 1
//
Enter a number:10
Enter a bit number:2
the 2  bit is set to 0
//
Enter a number:10
Enter a bit number:1
the 1  bit is set to 1