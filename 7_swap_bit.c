#include<stdio.h>

void main()
{
    int num1,num2;
    printf("Enter a numbers:");
    scanf("%d %d",&num1,&num2);

    printf(" original values of num1 = %d\n",num1);
    printf(" original values of num2 = %d\n",num2);

    num1^=num2;
    num2^=num1;
    num1^=num2;

    printf("num1 after swapping = %d\n",num1);
    printf("num2 after swapping = %d\n",num2);
    
    
    
    
}
//
Enter a numbers:22
65
 original values of num1 = 22
 original values of num2 = 65
num1 after swapping = 65
num2 after swapping = 22




