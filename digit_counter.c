#include <stdio.h>

int main () {

    int n, count = 0;

    printf("Enter an integer:");
    scanf("%d",&n);

    if (n == 0) {
       printf("number of digits:1\n");
       return 0;
    }

    if (n < 0)
       n = -n;//convert to positive

    do {
       n /= 10;
       count++;
    }while (n != 0);

    printf("number of digits: %d\n",count);
    return 0;
}
