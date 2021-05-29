#include<stdio.h>
int main(){
FILE *f1;char c;
printf("Data Input");
f1=open("INPUT","w");
while ((c=getchar())!=EOF){
    putc(c,f1);
}
fclose(f1);
f1=open("INPUT","r");
while(c=getc(f1)!=EOF){
    printf("%c",c);
}
fclose(f1);


    return 0;
}