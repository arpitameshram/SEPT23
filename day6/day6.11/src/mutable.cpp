#include<iostream>
 using namespace std;
 class Test{
 private:
 int num1;
 int num2;
 mutable int num3;
 public:

 Test( void ) : num1( 10 ), num2( 20 ), num3( 0 ){

 }
 void printRecord( void )const{
	 cout<< "Num1 :" <<this->num1<<endl;
	 cout<< "Num2 :" <<this->num2<<endl;
	 this->num3++;
	 cout<< "Num3 :" <<this->num3<<endl;
 }
};
 int main( void ){
 Test t;
 t.printRecord( );
 return 0;
 }
