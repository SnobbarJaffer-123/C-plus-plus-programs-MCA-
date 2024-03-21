#include<iostream>
using namespace std;

void swap(int a ,int b)
{
    //using temporary variable
   /* int c;
    c=b;
    b=a;
    a=c;
    cout<<"after swapping value of a is"<<a<<"and value of b is :"<<b<<endl;*/
    //without using temp variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping value of a is"<<a<<"and value of b is :"<<b<<endl;

}
void swap(float &c ,float &d)
{
 c=c+d;
    d=c-d;
    c=c-d;
    cout<<"after swapping value of c is"<<c<<"and value of d is :"<<d<<endl;
}
int main()
{
    //pass by value
    int a,b;
    float c,d;
    cout<<"enter val 1";
    cin>>a;
    cout<<"enter val 2";
    cin>>b;
    cout<<"before swapping value of a is"<<a<<"and value of b is :"<<b<<endl;
    swap(a,b);
    cout<<"(in main)after swapping value of a is"<<a<<"and value of b is :"<<b<<endl;

    //pass by refrence
    cout<<"enter val 1";
    cin>>c;
    cout<<"enter val 2";
    cin>>d;
    cout<<"before swapping value of c is "<<c<<"and value of d is :"<<d<<endl;
    swap(c,d);
    cout<<"(in main)after swapping value of c is"<<c<<"and value of d is :"<<d<<endl;
    return 0;
}
