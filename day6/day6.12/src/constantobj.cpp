#include<iostream>
 using namespace std;
 class Test{
 private:
 int number;

 public:

 Test( ) : number( 0 ){

 }
 void printRecord( void ){
	 cout<<"printRecord " <<endl;
 }
 void printRecord( void )const{
	 cout << "const printRecord"<<endl;
 }
};
 int main( void ){
 Test t1;
 t1.printRecord( );

 const Test t2;
 t2.printRecord( );
 return 0;
 }
