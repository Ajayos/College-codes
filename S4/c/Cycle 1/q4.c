#include<stdio.h>

int reverse(int);
int sumOfDigits(int);

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse of %d = %d\n", n, reverse(n));
    printf("Sum of digits of %d = %d\n", n, sumOfDigits(n));

}
int reverse(int n){
    int rev = 0, rem = 0;
    while(n>0){
        rem = n%10;
        rev = (rev * 10) + rem;
        n = n/10;
    }
    return rev;
}

int sumOfDigits(int n){
    int sum = 0, rem;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

