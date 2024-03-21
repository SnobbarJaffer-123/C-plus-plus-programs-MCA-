#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{

    int count[2],i,j;
    printf("\n Demonstration the command line argument  ");
    for(j=1;j<=2;j++)
    {
        scanf("%d",&count[j]);
         argc++;
    }
    printf("you have entered %d strings",argc-1);

    for(i=1;i<=2;i++)
    {
        printf("\n (%d)th string is: %s",i,argv[i]);

    }
    return 0;
}


