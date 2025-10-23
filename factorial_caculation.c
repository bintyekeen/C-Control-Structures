#include <stdio.h>

int main () {

    int n;
    unsigned long long factorial = 1; //handle large results

    printf("Enter a non negative integers:");
    scanf("%d",&n);

    if (n < 0) {
       printf("Factorial is not defined for nagetive numbers.\n");
       return 1;
    }

    int i =1;
    while (i <= n) {
          factorial *= i;
          i++;
    }

    printf("factorial of %d is: %llu\n", n,factorial);
    return 0;
}
