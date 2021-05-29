#include<stdio.h>
#include<conio.h>
int main(){

FILE *ptr;
int num;
ptr=fopen("Harry.txt","r");
fscanf(ptr,"%d",&num);
printf("The value of num is %d ",num);
getc();

    return 0;
}