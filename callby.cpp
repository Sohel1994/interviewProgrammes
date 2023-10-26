#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 /* Difference between pointer and reference 
 //  int a 
     reference  int &r = a;    pointer int *ptr = &a;
     reference is the alice name of the variabel
     pointer can be null 
     reference needs to initilize where it is referening to 
     pointer can be initilize to any other memory location or can be decleare without initilization
 */

void callbyValue( int a , int b)
{
      a + 10;
      b + 20;
}

void callbyPointer( int * a , int * b)
{
    *a = *a + 4;
    *b = *b + 5;
}

void callbyReference ( int &a , int &b)
{
     
      a = a + 100;
      b = b + 200;
}

int main()
{
    int A = 100;
    int B = 200;
   
    callbyValue( A , B);
    cout << " call by value of A :" << A << " and B: "<< B << "\n";
  
    // callbyPointer( &A , &B);
    // cout << " call by Pointer of A :" << A << " and B: "<< B << "\n";

    callbyReference( A , B);
    cout << " call by reference of A :" << A << " and B: "<< B << "\n";
}


