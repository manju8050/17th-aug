#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num & 1)
    {
        printf("lsb of %d is set(1)",num);
    }
    else
    {
        printf("lsb of %d is not set(0)",num);
    }
    
    
}

//
Enter a number:11
lsb of 11 is set(1)  //  11-> 0000 1011
                    &     1-> 0000 0001
                                      1

//
Enter a number:12
lsb of 12 is not set(0)
