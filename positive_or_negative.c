# include <stdio.h>

int main () {

   int n;

   printf("Enter an integer:");
   if (scanf("%d",&n) !=1) {
      //if input isn't an integer,exist with error.
      printf("invalid input.\n");
      return 1;
   }

   if (n > 0)
      printf("%d is a positive number.\n",n);
  else if (n < 0)
      printf("%d is a negative number.\n",n);
  else
      printf("%d is zero.\n",n);
  return 0;
}
