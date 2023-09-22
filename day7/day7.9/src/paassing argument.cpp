// passing arguments by address
#include<iostream>
using namespace std;
void swap_number( int *const x,int *const y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main( void ){
	int a = 10;
	int b = 20;
	swap_number( &a, &b);
	cout <<"a : "<<a <<endl;
	cout <<"b : "<<b <<endl;
	return 0;
}


