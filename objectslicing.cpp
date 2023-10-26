#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A {
  
     protected:
     int i;
     public:
     A() = default;
     A( int a): i{a}
     {

     }
     ~A() = default;

    virtual void show()
    {
        cout << i << '\n';
    }

 };

 void display ( A z) // pass by value
 {
     
     z.show();

 }

 void displayRef( A &z)
 {
    z.show();
 }

class D : public A
{
    int j;
    public:
    D(int d ,int a) :A(d)
    {
         j = a;
    };
    void show() override
    {
        cout << "i :" << i << "\n"
             << "j :"<< j << "\n";
    }

};

int main()
{
      A a(90);
      D d(10,20);
      display(a);
      display(d);

      displayRef(a); // collection in pointers or in reference does not do object slicing.
      displayRef(d);      
}