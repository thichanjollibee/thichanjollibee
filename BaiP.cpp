#include<bits/stdc++.h>
using namespace std ;

string kt( string s , char n )
{
    if ( n != '0' )
    {
        for ( int i = 0 ; i < s.size(); i++)
        {
            if( n > s[i])
            {
                s.insert(s.begin() + i, n);
                break ;
            }
        }

        return s ;
    }
    else
        return s + n ;

}
int main()
{
    string s ;
    cin >> s ;
    char n ;
    cin >> n ;

    cout << kt( s, n) ;

    return 0 ;
}
