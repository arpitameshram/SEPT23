#include<iostream>
using namespace std;
class Complex{
private:
 int real;
 int imag;
public:
 Complex( void ){
 this->real = 0;
 this->imag = 0;
 }
 Complex( int value ){
 this->real = value;
 this->imag = value;
 }
 Complex( int real, int imag ){
 this->real = real;
 this->imag = imag;
 }
 void printRecord( void ){
 cout << "Real Number : " << this->real << endl;
 cout << "Imag Number : " << this->imag << endl;
 }
};



