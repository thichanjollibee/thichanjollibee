#include<bits/stdc++.h>
using namespace std;

bool phaiPrimekhong ( int n )
{
    for( int i =2 ; i*i <= n ; i++ )
    {
        if( n%i ==0 )
        {
            return false ; 
        }
    }
    return n > 1 ; 
}
int main()
{
    string d; 
    getline(cin,d) ;
    cout << d << endl ;
    
   for( int i = 0 ; i< d.size(); i++ )
   {
       if(d[i] != ',') 
       {
           d[i]-= '0' ; 
           
       }
   }
   cout << d ; 
 
   
    
    
    
    
}
