#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int division( int a , int b)
{
     if ( b == 0)
     throw 0;
     else 
     return a/b;
}

int main()
{
     int i , result;
    //  try 
    //  {
    //         cout << " give me user input"<<"\n";
    //         cin >> i;
    //         if ( i < 10)
    //         cout << " user input is valid " << "\n";
    //         else 
    //         throw 1;
            
    //  }

     try 
     {
        result = division( 10 , 0);
        cout << " the result of division "<< result << "\n";      
     }

     catch (...)
     {
        cerr << " invalid input by user";
     }
}