
#include <stdio.h>

int main(){

int a[10];
int size=10,i;
int *p;
printf("%d\n",a);
p=a;
printf("%d\n",p);

for(i=0;i<size;i++){
    scanf("%d\n",p+i);
}

for(i=0;i<size;i++){
    printf("%d ",a[i]);

}


return 0;
}
