```

#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    printf("Enter the number: ");
    scanf("%d", &x);
    y = pow(x,2);
    printf(" The square of the number is = %d\n", y);

}

```

file name main.c

```
gcc  main.c -o main -lm
```

run

```
./main
```
---
---

#2

```
#include <stdio.h>
#include <math.h>

void main()
{
    float r,y,z;
    printf("Enter the side of sphere :  ");
    scanf("%f", &r);
    y = pow(r,3);
    z = (4 *3.14 * y/3);
    printf(" The volume of sphere is = %f\n", z);

}


```

---

```

#include <stdio.h>
#include<math.h>
void main()
{
    float x,result;
    printf("Enter a number : ");
    scanf("%f", &x);
    result = sqrt(x);
    printf(" The squre = %f\n", result);

}

```


