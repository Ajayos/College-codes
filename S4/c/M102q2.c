#include<stdio.h>
#include<math.h>
void rectangle();
void circle();
void triangle();
void main()
{
  rectangle();
  circle();
  triangle();
}
void rectangle()
{
  int l,b,rect_area;
  printf("Enter the length and breadth of rectangle: ");
  scanf("%d %d",&l,&b);
  rect_area=l*b;
  printf("Area of the rectangle is %d\n",rect_area);
}
void circle()
{
  int r;
  float circle_area;
  printf("Enter the radius of the circle: ");
  scanf("%d",&r);
  circle_area=(float)3.14*pow(r,2);
  printf("Area of the circle is %f\n",circle_area);
}
void triangle()
{
  int base,h;
  float tri_area;
  printf("Enter the base length and height of triangle: ");
  scanf("%d %d",&base,&h);
  tri_area=(float)(base*h)/2;
  printf("Area of the triangle is %f\n",tri_area);
}
