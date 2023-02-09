#include<stdio.h>
int main()
{
    int n;


    printf("scrivi un numero\n");
    scanf("%d", &n);
    int x = n - 1;
int somma = n;
    while(x > 0)
    {
        somma = somma*x;
        x = x - 1;
        
    }
    printf("%d\n",somma);
    
}