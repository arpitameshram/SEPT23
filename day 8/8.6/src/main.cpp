//Memory allocation and deallocation for array using calloc/free function.
#include<iostream>
#include<cstdlib>
using namespace std;
int main( void ){
 //Memory allocation for integer array
 int *ptr = (int*)calloc( 3 , sizeof( int ) );
 //Dereferencing
 ptr[ 0 ] = 10; //*( ptr + 0 ) = 10
 ptr[ 1 ] = 20; //*( ptr + 1 ) = 20
 ptr[ 2 ] = 30; //*( ptr + 2 ) = 30
 //Dereferencing
 for( int index = 0; index < 3; ++ index )
 cout << ptr [ index ] <<endl; //cout << *( ptr + index ) <<endl;
 //Memory deallocation array
 free( ptr );
 return 0;
}
