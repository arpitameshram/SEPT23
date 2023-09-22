#include<iostream>
using namespace std;
class Test{
private:
char &ch;
public:
Test( char &ch2 ) : ch( ch2 ){
}
};
int main( void ){
char ch1 = 'A';
Test t( ch1 );
size_t size = sizeof( t );
cout << "Size : " << size << endl;
return 0;
}



