#include <stdio.h>

int main () {
    int a,b,c ;
    printf("Enter three integers:");
    scanf ("%d %d %d",&a,&b,&c);

    if (a >= b && b <= a)
       printf("%d is the largest number,\n",a);
    else if (b >= c && c <= b)
       printf ("%d is the largest number,\n",b);
    else
       printf("%d is the largest number,\n");

    return 0;
}
