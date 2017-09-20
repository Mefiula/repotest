/*
 * Parzyste.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	
    int x = 2;
    for( int x = 1; x <= 100; x++ )
    {
        if( x % 3 )
        {
            cout << x << endl;
           
            if( x == 100 )
                 break;
           
        }
       
       
    }
	return 0;
}

