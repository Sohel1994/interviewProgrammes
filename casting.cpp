/*
     1) static casting  =>      
     Syntax : static_cast<type> (expersion); 
     done at compile time user need sure the convesion needs be safe and valid.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
     2)Dynamic casting
     derived *ptr = dynamic_cast<derived*> base_ptr // base_ptr is pointig to derived class object ;
     dynamic castin is run time convesion of one type varible to another type of variable only on class pointers and references
     if castin fails it returns null value
*/

class base
{
    public :
    virtual void print()
    {

    }    
};

class derived :public base
{
   
};

// define a function  
int disp(int *pt)  
{  
    return (*pt * 10);  
}  


int main()
{
    // stastic casting
    cout<< "================ static casting ======================"<<"\n";
    double mul = 2.3 * 4.6 * 8.77;
    cout << "before static casting  mul : "<< mul <<"\n";

    int total = static_cast<int>(mul);
    cout<<"After static cast totol of mul : "<< total <<"\n";


    // dynamic casting
    cout<< "================ dynamic casting ======================"<<"\n";

    base *ptr = new derived();
    derived *dPtr = dynamic_cast<derived*>(ptr); // upcasting

    if(dPtr!=NULL)
    {
        cout<<" the dynamic casting is done successful "<<"\n";
    }
    else
    {
        cout << " the dynamic castin gets failed "<<"\n";
    }  

    // 3)Reinterpret casting
    // reinterpret_cast <type> expression;  
    // used to cast pointer to any other type of pointer 
    // means does not check pointer or data pointed by pointer is the same or not  
    cout<< "================ Reinterpret casting ======================"<<"\n";

    int *rPtr = new int(65);
    char *ch  = reinterpret_cast<char*>(rPtr);

    cout << " The value of pt: " << rPtr << endl;  // address
    cout << " The value of ch: " << ch << endl;     // A

    // get value of the defined variable using pointer  
    cout << " The value of *ptr: " << *rPtr << endl;  
    cout << " The value of *ch: " << *ch << endl;  


    //const casting 
    //const_cast<type>(expression);
    // use const_cast to chnage the constness of the source pointer 


    cout<< "================ Reinterpret casting ======================"<<"\n";
    const int num = 50;  
    const int *pt = &num;

    // use const_cast to chnage the constness of the source pointer  
    int *cPtr = const_cast <int *> (pt);
    cout<< " the value of cPtr cast " << disp(cPtr) <<"\n";
}
