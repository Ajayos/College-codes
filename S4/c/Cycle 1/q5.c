#include<stdio.h>

int areaRect();
float areaTri();
float areaCircle();

void main(){
    int length, breadth, radius, base, height;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    
    printf("Enter base of triangle: ");
    scanf("%d", &base);
    
    printf("Enter height of triangle: ");
    scanf("%d", &height);
    
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    
    int rectArea = areaRect(length, breadth);
    float triArea = areaTri(base, height);
    float circleArea = areaCircle(radius);

    printf("Area of Rectangle = %d\n", rectArea);
    printf("Area of triangle = %f\n", triArea);
    printf("Area of circle = %f\n", circleArea);
}
int areaRect(int l, int b){
    return l * b;
}

float areaTri(int b, int h){
    float a = (b*h)/2.0;
    return a;
}
float areaCircle(int r){
    float area = (float) 3.14 * r * r;
    return area;
}
