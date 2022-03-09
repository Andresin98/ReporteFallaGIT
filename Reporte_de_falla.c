
// FIX CODE!!!

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
    printf("Â¿La falla esta presente?\n");
    printf(hay_falla? "true" : "false");
}

void Reporte_de_falla(Corto_T dato)
{
    bool falla = true;
    if (SIN_CORTOS == dato)
    {
        falla = false;
    }
    Interface_falla(falla);
}