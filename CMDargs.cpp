#include<iostream>
#include<string>
int main(int argc,char *argv[])
{
    int count=0;
    printf("%s\n",argv[0]);
    printf("\n demonstrating the command line arguments");
    printf("\n the value of argc is: %d",argc);
    while(count<argc)
    {

        printf("\n(%d)th string is:%s",count,argv[count]);
        count++;

    }
    return 0;
}
