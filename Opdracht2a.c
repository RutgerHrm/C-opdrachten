/*
 * Hieronder de code van het eerste deel van opdracht 2.
 * Het roept de "Hello World" code van opdracht 1 uit de aparte opdracht1.exe file aan.
 * Alles werkt perfect in mijn IDE.
 */

#include <stdio.h>

int main(void)
{
    float x;
    printf("Kies uit één van de drie opties (voer bijbehorende cijfer in): ");
    printf("\n1. Vis");
    printf("\n2. ?");
    printf("\n3. Krab\n\n");
    scanf("%f",&x);
    if(x == 1)
    {
        printf("\n><>");
    }
    else if(x == 2)
    {
        system("opdracht1.exe");
    }
    else if(x == 3)
    {
        printf("\nV=(o o)=V");
    }
    else if(x < 0)
    {
        printf("\nGeen negatieve getallen");
        return(0);
    }
}
 
