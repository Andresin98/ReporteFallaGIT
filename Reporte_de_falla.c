/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

typedef enum Corto_Tag
{
    SIN_CORTOS    = 1,
    CORTO_BATERIA = 6,
    CORTO_TIERRA  = 7
}Corto_T;

void Interface_falla(bool hay_falla);
void Reporte_de_falla(Corto_T dato);

int main()
{
    Reporte_de_falla(1);

    return 0;
}

void Interface_falla(bool hay_falla)
{
    /*Imprime el estado de la falla*/
    printf("¿La falla esta presente?");
    printf(hay_falla? "true" : "false");
}

void Reporte_de_falla(Corto_T dato)
{
    bool falla = false;
    if (SIN_CORTOS == dato)
    {
        falla = true;
    }
    Interface_falla(falla);
}