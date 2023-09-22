//Memory allocation and deallocation for single variable using calloc/free function.
#include<iostream>
#include<cstdlib>
using namespace std;
int main( void ){
 //Memory allocation for single integer variable
 int *ptr = (int*)calloc( 1, sizeof( int ) );
 //Dereferencing
 *ptr = 123;
 cout<<"Value : "<< *ptr << endl; //Dereferencing
 //Memory deallocation for single integer variable
 free( ptr );
 return 0;
}
