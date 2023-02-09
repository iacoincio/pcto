#include<stdio.h>

int main()
{
      int y;
    int x;
    int array[y];

    printf("inserisci un numero\n");

    while(y > 0)
    {
        array[y] = x; 
        y = y +1;
        x = x +1;
    }
    y = 0;
    while(y > 0)
    {
        printf("%d\n", array[y]);
        y = y + 1;
    }
}