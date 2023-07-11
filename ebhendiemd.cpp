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
    char s = ',' ; 
    int cnt ; 
    string d; 
    getline(cin,d) ;
    
   for( int i = 0 ; i< d.size(); i++ )
   {
       if( d[i] == s )
       {
           for(int j = i + 1 ; j< d.size() ; j++ )
           {
              if( phaiPrimekhong((int)d[j]) == 1 )
              {
                  cout << "KHONG" ;
                  break ; 
              }
              else
              {
                  cnt ++ ; 
              }
           }
       }
   }
  
  int Tong = 0 ; 
  for ( int i = 0 ; i < d.size() ; i++ )
  {
      if(d[i] != s)
      {
          Tong += (int)d[i] ; 
      }
  }

  if(cnt == d.size() -  && phaiPrimekhong(Tong) == 1){
        cout << "CO" << endl;
    }else{
        cout << "KHONG" << endl;
    }
}
 
