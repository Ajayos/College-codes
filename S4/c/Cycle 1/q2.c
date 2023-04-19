#include<stdio.h>

void main(){
    int a, b, c, d, e;
    float avg;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e)/5.0;
    printf("Average = %f\n", avg);
}
