#include<stdio.h>
#include<math.h>

void main(){
    float a, b, c, d, ans1, ans2, root;

    printf("Enter a b c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d > 0){
        root = sqrt(d);
        ans1 = (-b + root)/(2 * a);
        ans2 = (-b - root)/(2 * a);
        printf("Answers are %f or %f\n", ans1, ans2);
    }
    else if(d == 0){
        ans1 = -b / (2*a);
        printf("Answer is %f\n", ans1);
    }
    else{
        printf("Numbers are Dismatch\n");
    }

}

