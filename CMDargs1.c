#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[3])
{
    int count=0;
    printf("\n demonstrating the command line arguments");
    printf("\n the value of argc is: %d",argc);
    while(count<argc)
    {

        printf("\n(%d)th string is:%s",count,argv[count]);
        count++;

    }
}

