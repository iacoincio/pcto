#include<stdio.h>
int main()
{
    int x;
    
    printf("in che anno sei nato?\n");
    scanf("%d", &x);
    
    if (x == 1969)
    {
        printf("sei nato in quell'anno\n");
    }
    else if (x > 1969)
    {
        int differenza1 = x - 1969;
        printf("sei nato %d anni dopo\n", differenza1);
    }
    else if (x < 1969)
    {
        int differenza2 = 1969 - x;
        printf("sei nato %d anni prima\n", differenza2);
    }
}