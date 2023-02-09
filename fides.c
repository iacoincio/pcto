#include<stdio.h>

//creare una aary e riempilo di numeri pari da 0 a 8
int main()
{
  int i = 0;//scorre un elemento pari alla volta
  int x = 0;//scorre i numeri pari da 0 a 8
  int array[5];

  while(i <= 4)
  {
    array[i] = x;
    i = i + 1;
    x = x + 2;
  }
  //resetto la i a 0
i = 0;

//stampo l array un elemento alla volta
  while(i <= 4)
  {
    printf("%d\n", array[i]);
    i = i + 1;
  }
  }
