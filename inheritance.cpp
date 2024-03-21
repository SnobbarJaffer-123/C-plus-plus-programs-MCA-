#include<iostream>
using namespace std;

class A
{
    int x;
public:
    int getX()
    {
        return x;
    }
    void setX(int a)
    {
        x = a;
    }

    int getData()
    {
        cout<<"\n A::getData will return member x of class A \n";
        return x;
    }

};

class B : public A
{
    int x;
    int y;
public:

    int getY()
    {
        return y;
    }
    void setY(int a)
    {
        y = a;
    }


    void setX_B(int a)
    {
        setX(a);
    }

int getData()
    {
        cout<<"\n B::getData will return member x of class B \n";
        return x;
    }

};




/*
 int getX_B()
    {

        return getX();
    }
    void setX_B(int a)
    {
        setX(a);
    }
*/



int main()
{
    A objA;
    B objB;

    objA.setX(10);

    cout<<objA.getX()<<endl;

objB.setX(20);

objB.setX_B(20);

objB.setY(30);

cout<<objB.getX()<< " "<<objB.getY()<<endl;

objB.getData();

objB.A::getData();














    return 0;
}
