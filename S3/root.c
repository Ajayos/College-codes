#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c;
 float d,root,root1,root2;
 printf("Enter a & b & c:");
 scanf("%f %f %f",&a,&b,&c);
 d=b*b-4*a*c;
 printf(" The value of d is %f\n",d);
 if(d>0)
 	{
 	 root1=(-b+sqrt(d))/(2*a);
 	 root2=(-b-sqrt(d))/(2*a);
 	printf("The two real roots are %f %f\n",root1,root2);
	}
 else if(d==0)
 	{
 	 root=-b/(2*a);
 	 printf("The equal roots are %f\n",root);
 	}
 else
  	printf("The roots are imaginary\n");
}
