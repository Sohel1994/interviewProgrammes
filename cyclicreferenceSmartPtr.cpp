
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class B;
class A
{   
    shared_ptr<B> bPtr;
    
    public:
    void setB( shared_ptr<B> &b)
    {
        bPtr = b;
    }
    
    A()
    {
       cout <<" the class A constructor "<<"\n";
    }

    ~A()
    {
        cout <<" the class A distructor "<< "\n";
    }
};

class B
{   
    weak_ptr<A> aPtr; // use weak ptr to avoide strong cyclic referecnce
    public:
    void setA( shared_ptr<A> &a)
    {
        aPtr = a;
            }
    
    B()
    {
       cout <<" the class B constructor "<<"\n";
    }

    ~B()
    {
        cout <<" the class B distructor "<< "\n";
    }
};

int main()
{

    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

     a->setB(b);
     b->setA(a);

}