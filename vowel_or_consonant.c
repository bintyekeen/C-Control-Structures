#include <stdio.h>
#include <ctype.h>

int main () {
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    //conver to lowercase for easier comparison
    ch = tolower(ch);

    if(ch =='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u')
      printf("%c' is a vowel.\n",ch);
    else if ((ch>='a' && ch<='z'))
      printf("%c' is a consonant.\n",ch);
    else
      printf("%c' is an alphabet character.\n",ch);

    return 0;
}
