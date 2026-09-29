#include <stdio.h>
//countEvenOddV(): ritorna il numero degli elementi pari e di quelli dispari di un vettore di interi;
void countEvenOdd(int v[], int DIM){
    int rpari=0;
    int rdispari=0;
    for(int i=0;i<DIM;i++)
        if(v[i]%2==0)
            rpari=i;
            return rpari;
        else{    
            rdispari=i;
            return rdispari;
        }
}
        