#include<stdio.h>

/**
print_alphabet -function prints the alphabet , lowers=case
you can only use _putchar twice in the code
return 0
**/
void print_alphabet(void)
{
  int l = 'a' ;
  while (l <= 'z')
    {
      _putchar(l);
      l += 1;
    }

  _putchar (10);
}
