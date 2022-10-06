#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,s,s1,s2;
	printf("Enter value of a, b, c: ");
	scanf("%f %f %f",&a,&b,&c);
	d=(pow(b,2)-(4*a*c));
	if(d>0)
	{
		s1=(-b+sqrt(d))/(2*a);
		s2=(-b-sqrt(d))/(2*a);
		printf("The two different real root of the equation are %f and %f\n",s1,s2);
	}
	else if(d==0)
	{
		s=-b/(2*a);
		printf("The two equal roots are %f\n",s);
	}
	else
	{
		printf("It has imaginary roots\n");
	}
}
