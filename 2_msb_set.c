#include<stdio.h>

void main()
{
    int num,msb;
    printf("Enter a number:");
    scanf("%d",&num);
    int b = sizeof(int)*8;

    msb = 1<<(b-1);

    if(msb & num)
    {
        printf("msb of %d is set(1)",num);
    }
    else
    {
        printf("msb of %d is not set(0)",num);
    }
    
    
}

//
Enter a number:-1
msb of -1 is set(1)

//
Enter a number:10
msb of 10 is not set(0)
