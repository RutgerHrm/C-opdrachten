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

-------------------------------------------------------------------------------------------------
  
/*
 * Hieronder de code van het tweede deel van opdracht 2.
 * Door middel van een aparte diameter functie en pointers.
 * Alles werkt perfect in mijn IDE.
 */
  
#include<stdio.h>  
  
void dia(float, float*, float*);  
  
int main()  
{  
    float diameter, radius, omtrek;  
  
    printf("Vul de diameter van een cirkel hieronder in (cm):\n");  
    scanf("%f", &diameter);  
  
    dia(diameter, &radius, &omtrek);  
  
    printf("\nOmtrek van de cirkel in centimeter = %0.2f\n", omtrek);  
  
    return 0;  
}  
  
void dia(float d, float *r, float *o)  
{  
    *r = d / 2; 
    *o = 2 * 3.14 * *r;  
}  
