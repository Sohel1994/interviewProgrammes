#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    A()
    {
        cout << " constuctor " << "\n";
    }
    ~A()
    {
        cout<<" distructor " << "\n";
    }

    void show ()
    {
        cout<< " Hello form A "<< "\n";
    }
};

class B : virtual public A
{
     
};

class C : virtual public A 
{

};

class D : public B , public C
{
    public:
    D() : A()
    {
      cout<< " constructor D"<<"\n";
    }

    ~D()
    {
         cout<< " distructor D"<<"\n";
    }
};

int main()
{
    D d;
    d.show();
}
