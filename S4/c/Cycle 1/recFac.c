#include<stdio.h>

int fac(int);

void main(){
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = fac(n);
    printf("Factorial = %d\n", f);
}
int fac(int n){
    if(n<3){
        return n;
    }
    else{
        return n*fac(n-1);
    }

}
