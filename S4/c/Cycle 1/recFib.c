#include<stdio.h>

int f1 = 0;
int f2 = 1;
void fib();

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fib(n);
    printf("\n");
}
void fib(int n){
    if(n>f1){
        printf("%d  ", f1);
        int c = f1;
        f1 = f2;
        f2 += c; 
        fib(n);
    }
}
