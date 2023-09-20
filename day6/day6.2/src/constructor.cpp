#include<iostream>
using namespace std;b
class Complex{
};
int main( void ){
 Complex c1; //On c1 Default constructor will call
 Complex c2( 10, 20 ); //Compiler error
 return 0;
}
