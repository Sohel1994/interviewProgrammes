#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Oprtr
{

    int i = 10;
    public:
    Oprtr() = default;
    ~Oprtr() = default;

    Oprtr & operator++()
    {
        ++(this->i);
        return *this;
    }

    Oprtr & operator++(int) // int denotes to deduce it to post increment by compiler. 
    { 
        (this->i)++;
        return *this;
    }
    
    int operator()(int a) // function calll operator overloding
    {
         return (this->i)+a; 
    }

    void operator=( Oprtr &p) // assignement operator overloading
    {    
         i = ++(p.i);
    }

    
    friend ostream & operator<<( ostream &os , Oprtr &o); 
    friend istream & operator >> (istream &in,  Oprtr &c);

};

ostream & operator<<( ostream &os , Oprtr &o) // insertion operator overloading
 {
        os<< o.i;
        return os;
}

istream & operator >> (istream &in,  Oprtr &c) // extraction operator overload.
{
    cout << "Enter i value "<< "\n";
    in >> c.i;
    return in;
}

int main()
{
   Oprtr o , w , j , i ,k;
   ++o;
   cout<< o << "\n";
   w++;
   cout << w << "\n";
   
   cout << j << "\n";
    i = j;
   cout<< i << "\n";

   cin  >> k; // extraction operator overload
   cout << k <<"\n";

   int result = k(8); // fuction called () operator overloading 
   cout<<"result is : "<< result<< "\n";



}