//corniceValoreM(): dice se tutti gli elementi della cornice
// della matrice quadrata di interi valgono v;
#include <stdio.h>
#include <stdbool.h>

#define l 3

bool corniceValoreM(int m[l][l], int n)
{
    int i=0;

    
    for (i = 0; i < l; i++) {
        if (m[0][i] != n) return false;
        if (m[l-1][i] != n) return false;
    }


    for (i = 0; i < l; i++) {
        if (m[i][0] != n) return false;
        if (m[i][l-1] != n) return false;
    }

    return true;
}