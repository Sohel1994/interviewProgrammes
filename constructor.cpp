#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class cpy {

    int *p =NULL ;
    int i = 10;
    public:
    cpy() 
    {
        p = new int;
        cout << " constructor "<< "\n";
    }

    ~cpy()
    {
        delete p;
        cout<< " distructor " << "\n";
    }
    
    cpy(const cpy & c) // explicitly calles copy constructor.
    {
          i = c.i;
          p = new int ;
         *p = *(c.p);
    }
    void setvalue()
    { 
            i = i + 10;
           *p = 100;
    }

    friend ostream & operator<< ( ostream &os , cpy &c);

};

ostream & operator<< ( ostream &os , cpy &c) 
{
    os << " i is:" << c.i << ", *P:"<< *(c.p) << "\n";
    return os;

}

int main()
{

    cpy a;
    cpy b = a;
    cout << a ;
    cout << b ;
    a.setvalue();
    cout << a;
    cout << b;

}

