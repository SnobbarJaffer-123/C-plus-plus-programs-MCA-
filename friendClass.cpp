#include<iostream>

using namespace std;


class A
{
private:
    int x;
public:

    void setData(int a)
    {
        x = a;
    }
    int getData()
    {
        return x;
    }

    friend class B;

    friend class C;


};



class B
{
private:
    int y;

public:
    void setData(int a)
    {
        y = a;
    }
    int getData()
    {
        return y;
    }

    void getDataA(A & obj)
    {
        cout<<"the value of member x of Class A "<<obj.x<<endl;
    }
};

class C
{
private:
    int abc;

public:
    void setData(int a)
    {
        abc = a;
    }
    int getData()
    {
        return abc;
    }


  void  getDataA(A &obj)
    {
        cout<<"the value of member x of Class A  "<<obj.x<<endl;
    }
};


int main()
{

    A obj1;

    obj1.setData(10);

    B obj2;

    obj2.getDataA(obj1);

    C obj3;


    obj3.getDataA(obj1);

    return 0;

}
