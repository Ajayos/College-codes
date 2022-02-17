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
