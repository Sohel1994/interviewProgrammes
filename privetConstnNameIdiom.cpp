#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// private constructor
class A
{
     int i;
     A( int a)
     {
         
        i= a;
        cout << "object created "<<"\n";
     }

     public:
     A *getInstrant(int i)
     {
         return new A(i);
     }

};

int main()
{
    A *a = NULL;
    a->getInstrant(20);
}