#include <stdio.h>

int main()
{
    int a;
    int b;
   
    printf("inserisci due numeri: %d %d \n", a,b);
    scanf("%d %d", &a, &b);
    int maggiore = a > b;
    if(a > b)
    {
 printf("a é maggiore di b\n");
    }
    else if (a  == b)
    {
 printf("a é uguale a b\n");
    }
    else if (a < b)
    {
printf("a é minore di b\n");
    }

}