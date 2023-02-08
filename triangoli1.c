#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;

    printf("inserisci tre numeri\n");
    scanf("%d %d %d", &x , &y , &z);

    if(x+y > z && x+z > y && y+z > x)
    {
        printf("è un triangolo\n");
    }
    else
    {
        printf("non è un triangolo\n");
    }
}