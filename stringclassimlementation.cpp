#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class myString{

    char *str;
    public:
    myString() //constructructor with no argument
    {
        str = new char[1];
        str[0]= '\0';

    }
    
    myString(char *val)
    {
        if( val = nullptr)
        {
            str = new char[1];
            str[0]= '\0'; 
        }
        else
        {
              str = new char[strlen(val)+1];
              strcpy(str,val);
              str[strlen(val)] = '\0';
        }
    }

    myString (const myString &s)
    {
        str = new char[ strlen(s.str)+1];
        strcpy(str,s.str);
        str[strlen(s.str)] = '\0';
    }
    
    void operator=( const myString &s)
    {
        str = new char[ strlen(s.str)+1];
        strcpy(str,s.str);
        str[strlen(s.str)] = '\0';
    }

    ~myString()
    {
        delete [] str;
    }
};


int main()
{
    myString a; // constructor with no argument
    
    char temp[] = "hello";

    myString b(temp); // constructor with argument

    myString c(a);  // copy constructor 
 
    myString d ;

    d = b;  // operator overloading

}