#include<iostream>
using namespace std;
void sum( int num1, float num2 ){
 int result = num1 + num2;
 cout<<"Result : "<<result<<endl;
 }
 void sum( float num1,int num2 ){
 int result = num1 + num2 ;
 cout<<"Result : "<<result<<endl;
 }
 int main( void ){
 sum( 10, 20.2f );
 sum( 10.1f, 20);
 return 0;
 }



