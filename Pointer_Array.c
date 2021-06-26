#include <stdio.h>

int main(){

int a[10];
//int a[10]={1,2,3,4,5,6,7,8,9,10};
int size=10,i,t,count;
int *p;
printf("%d\n",a);
p=a;
printf("%d\n",p);

/*
for(i=0;i<size;i++){
    //scanf("%d",&a[i]);
    scanf("%d",p+i);
}

for(i=0;i<size;i++){
    printf("%d ",*(p+i));
    //printf("%d ",a[i]);
}
*/

/*
scanf("%d",&t);

if (size>=t){
    for(i=0;i<t;i++){
        //scanf("%d",&a[i]);
        scanf("%d",p+i);
    }

    for(i=0;i<t;i++){
        printf("%d ",*(p+i));
        //printf("%d ",a[i]);
    }
}
else{
    printf("OVERFLOW\n");
}
*/

/*
i=0;
while (scanf("%d",p+i)==1){
    i++;
    if(i>size){
        printf("OVERFLOW\n");
        break;
    }
}
count=i;

for(i=0;i<count;i++){
        printf("%d ",*(p+i));
        //printf("%d ",a[i]);
    }
*/
/*
int x;
i=0;
while (scanf("%d",&x)==1){
    i++;
    if(i>size){
        printf("Overflow\n");
        i--;
        break;
    }
    *(p+i-1) = x;
}
count=i;

for(i=0;i<count;i++){
        printf("%d ",*(p+i));
        //printf("%d ",a[i]);
    }
*/
int x;
i=0;
while (scanf("%d",&x) && x!=0){
    i++;
    if(i>size){
        printf("Overflow\n");
        i--;
        break;
    }
    *(p+i-1) = x;
}
count=i;

for(i=0;i<count;i++){
        printf("%d ",*(p+i));
        //printf("%d ",a[i]);
    }

return 0;
}
