#include<iostream>
 using namespace std;
 class Test{
 private:
 int number;
 public:

 Test( void ) : number( 10 ){
 this->number = this->number + 10;
 }
 void showRecord( void ){
 this->number = this->number + 2;
 cout << "Number : " << this->number << endl;
 }

 void printRecord( void )const{
 Test t;
 t.number = 20;
 t.showRecord( );
 }
 };
 int main( void ){
 Test t;
 t.printRecord( );
 return 0;
 }
