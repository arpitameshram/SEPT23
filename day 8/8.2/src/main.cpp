//using throw keyword
#include<iostream>
 #include<string>
 using namespace std;
 int main( void ){
 try{
 try{
 string ex("exception" );
 throw ex;
 }catch( string &ex ){
 cout << "Inside nested catch block" <<endl;
 throw; //Rethrow exception ex
 }
 }catch( string &ex ){
 cout << "Inside outer catch block" <<endl;
 }catch( ... ){
 cout << "Inside outer generic catch block" <<endl;
 }
 return 0;
 }
