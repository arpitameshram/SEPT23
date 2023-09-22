
//Memory allocation and deallocation for multidimensional array using calloc/free function.
#include<iostream>
#include<cstdlib>
using namespace std;
int main( void ){
 int **ptr = (int**)calloc( 2,  sizeof( int * ) );
 for( int index = 0; index < 2; ++ index )
   ptr[ index ] = ( int* ) calloc( 3, sizeof( int* ) );

 cout << "Enter values for the 2x3 array:" << endl;
     for (int row = 0; row < 2; ++row) {
         for (int col = 0; col < 3; ++col) {
             cout << "Enter value for row " << row << " and column " << col << ": ";
             cin >> ptr[row][col];
         }
     }


     cout << "Entered values:" << endl;
     for (int row = 0; row < 2; ++row) {
         for (int col = 0; col < 3; ++col) {
             cout << ptr[row][col] << " ";
         }
         cout << endl;
     }
 for( int index = 0; index < 2; ++ index )
 free( ptr[ index ] );
 free( ptr );
 return 0;
}
