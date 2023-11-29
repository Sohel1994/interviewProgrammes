// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
       char s [10] = "sohel";
       char d [10] = "heslo";
       int slen = 0 ;
       int dlen = 0 ;
       int i ;
	   int j ;
	   int flag = 0;
       int notFound = 0;
	   for ( i = 0 ; s[i] !='\0' ; i++)
	   {
 	        ++slen;
	   }
	   for ( j = 0 ; d[j] !='\0' ; j++)
	   {
 	        ++dlen;
	   }
	   cout << " len s :" <<  slen << " " << dlen <<" \n";
	   if( slen != dlen)
	   {
	      cout << "string are not anagram";
	   }
	   else 
	   {
	       for ( i = 0 ; i<slen ; i++)
		   { 
		       flag  = 0;
		       for ( j = 0 ; j < dlen ;j++)
                {
				    if ( s[i] == d[j])
					{
					    cout << s[i] << " " <<  d[j] << "\n";
					    flag = 1;
						break;
					}
				}	
             if(flag == 0 )
             {
			    notFound = 1; 
			    break;
			 }
		   }   			 
	   }	   
	   if (notFound == 1)
	   cout << "strings are not anagram ";
	   else
	   cout << "strings are anagram ";
}