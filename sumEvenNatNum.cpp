#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the value n to get the sum of even natural numbers until n ->";
    cin>>n;
    cout<<endl;
    for(int i=0;i<=n;i++)
    {
        sum=sum+(2*i);
    }
    cout<<"Sum of first "<<n<<"even natural numbers is  "<< sum<<endl;
    return 0;
}
