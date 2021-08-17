#include<stdio.h>

void main()
{
    int num,n,new_num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Enter a bit number:");
    scanf("%d",&n);

    new_num = (1<<n)^num;

    printf("num %d\n",num);
    printf("new_num %d",new_num);
    
    
    
}

//
Enter a number:22
Enter a bit number:1
num 22
new_num 20
