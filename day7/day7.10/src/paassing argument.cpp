// passing arguments by reference
#include<iostream>
using namespace std;
void swap_number( int &x, int &y ){
 int temp = x;
 x = y;
 y = temp;
}
int main( void ){
 int a = 10;
 int b = 20;
 swap_number( a, b ); //Function call by reference
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;
 return 0;
}


