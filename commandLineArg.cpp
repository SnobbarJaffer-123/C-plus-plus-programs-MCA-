#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc,char *argv[])
{
    int count=1;
    int sum=0;
    for(int i=0;i<argc;i++)
    {
        sum=sum+atoi(argv[i]);
        count++;
    }
    cout<<count<<endl;
    sum/=count;
    cout<<sum;
    return 0;
}

