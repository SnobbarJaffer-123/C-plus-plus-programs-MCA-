#include<stdio.h>
#include "myHeader.h"

int main()
{

    int num,limit;
    printf("enter the number for multiply");
    scanf("%d",&num);

    printf("Enter the limit");
    scanf("%d",&limit);
    mul(num,limit);
}
