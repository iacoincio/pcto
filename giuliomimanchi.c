#include<stdio.h>
//prendere in input con scanf un array di interi di dimensione fissata da voi in farse di inizializzazione(int array [dimensione])
//ed invertirlo utilizzando una sola variabile extra oltre all array e alla int i usato per scorrerlo, e per finire stamparlo
int main()
{
    int i = 0;
     int array[5];
//riempio l array di numeri
     while(i <= 4)
     {
        printf("%d\n", array[i]);
        i = i + 1;
     }
//resetto l array
     i = 0;
//stampare l array
     while(i <= 4)
     {
        printf("%d\n", array[i]);
        i = i + 1;
     }

     i = 0;
     //variabile temporanea per scambiare gli elementi a due  a due senza perdere il valore di uno dei due
     int temp;
     while(i < 2)
     {
        temp = array[i];
        array[1] = array[4 - i];
        array[4 - i] = temp;
        i = i + 1;
     }

     i = 0;
     while(i <= 4)
     {
        printf("%d\n", array [i]);
        i = i + 1;
     }
}