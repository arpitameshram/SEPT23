#include<iostream>
using namespace std;
class Complex{
private:
	int real;
	int imag;
public:
	int getReal( void ){
		return this->real;
	}
	void setReal( int real ){
		this->real = real;
	}
	int getImag( void ){
		return this->imag;
	}
	void setImag( int imag ){
		this->imag = imag;
	}
};

int main( void){
	Complex c1;
	c1.setReal( 10 );
	c1.setImag( 20 );

	cout<<"Real Number : "<< c1.getReal( ) << endl;
	cout<<"Imag Number : "<< c1.getImag( ) << endl;
	return 0;

}
int main1( void ){
	Complex c1;
	c1.setReal( 10 );
	c1.setImag( 20 );

	int real = c1.getReal( );
	cout <<"Real number : "<<real << endl;

	int imag = c1.getImag( );
	cout <<" Imag number : "<<imag<<endl;
	return 0;
}
