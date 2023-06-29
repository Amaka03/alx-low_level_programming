#include <stdio.h>

/**
* write your line of code here...
* Remember:
* - you are not allowed to use the variable a
* - you are not allowed to modify the variable p
* - only one statement can be written
* - you are not allowed to code anything else than this line of code
*/

int main(void)

{
int n;
int a[5];
int *p;

a[2] = 98;
p = &n;
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
