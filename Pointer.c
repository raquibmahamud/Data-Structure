#include <stdio.h>

int main(){

int a;
int b=10;
int *p,*q;

a=5;
p=&a;
*p=50;

printf("%d\n",*p);
printf("%d\n",&a);

return 0;
}
