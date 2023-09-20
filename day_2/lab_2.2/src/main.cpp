#include<cstdio>
#include <iostream>

using namespace std;
int main() {
    const int num = 10;
    const int *ptr=&num;
    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr;
    return 0;
}



