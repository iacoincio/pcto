#include<stdio.h>

int main()
{
    int y = 0;
    int x = 10;
    int array[11];

    while(y <= 10)
    {
        array[y] = x; 
        y = y +1;
        x = x +1;
    }
    y = 0;
    while(y <= 10)
    {
        printf("%d\n", array[y]);
        y = y + 1;
    }


}