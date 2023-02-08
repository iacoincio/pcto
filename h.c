#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;

    printf("inserisci tre numeri\n");
    scanf("%d %d %d", &x , &y , &z);

    if (x + y > z && y + z > x && a + z > y)
    {
        printf("è un triangolo");  
    }
    else if(x != y && y != z && x != z)
    {
        printf("è un triangolo scaleno\n");
    }
    else(x == y && x == z && y == z)
    {
        printf("è un triangolo equilatero\n");
    }
    else((x == y && x !=z) || (y == z && x != z) || (z == x && a != y))
    {
         printf("è un triangolo isoscele\n");
    }

    }
