#include<stdio.h>

int main()
{
    int a;
    int b;
    
    
    printf("inserisci due numeri: %d %d \n", a, b);
    scanf ("%d %d", &a, &b);
    int divisione = a/b;
    printf("la divisione di a e b è: %d\n" , divisione);
}