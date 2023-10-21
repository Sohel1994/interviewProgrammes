#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>
class smartPtr
{
     T * ptr;
     public:
     smartPtr( T* p = NULL)
     {
        ptr = p;
     }

     ~smartPtr()
     {
        delete ptr;
     }

     T& operator*()
     {
        return *ptr;
     }

     T* operator->()
     {
        return ptr;
     }
};

int main()
{
    smartPtr<int> p (new int());
    *p = 10;
    cout<< " p is " << *p << " \n";
    {
        smartPtr<int> q = p;
        cout << " q is :"<< *q << "\n";
    }
    cout<< " p is " << *p << " \n"; // p becomes danglinng pointer p and q both are refering same memory location 
                                    // no destructor gets called by q ptr

}