#include<stdio.h>
int main(){

int a;
int b;

printf ("enter two numbers\n");
scanf ("%d %d",&a,&b);

int *ptrA=&a;
int *ptrB=&b;
if (*ptrA>*ptrB) {
  printf("max=%d",*ptrA);
}
else
  printf("max=%d",*ptrB);
return 0;

}

