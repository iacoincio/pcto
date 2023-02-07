#include <stdio.h>
int main()
{
    int temp;

    
    printf("inserisci una temperatura in gradi Celsius\n");
    scanf("%f", &temp);
    if(temp<-273.15)
    {
        printf("errore\n ");
    }
    else
    {
        float fahrenheit = temp9/5+32;
        printf("ïn fahrenheit: %f\n", fahrenheit);
        float kelvin= temp+273.15;
        pintf("in kelvin: %f\n", kelvin);

    }
}