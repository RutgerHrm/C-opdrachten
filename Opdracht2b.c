 
/*
 * Hieronder de code van het tweede deel van opdracht 2.
 * Door middel van een aparte diameter functie en pointers.
 * Alles werkt perfect in mijn IDE.
 */
  
#include<stdio.h>  
  
void dia(float, float*);  
  
int main()  
{  
    float diameter, omtrek;  
  
    printf("Vul de diameter van een cirkel hieronder in (cm):\n");  
    scanf("%f", &diameter);  
  
    dia(diameter, &omtrek);  
  
    printf("\nOmtrek van de cirkel in centimeter = %0.2f\n", omtrek);  
  
    return 0;  
}  
  
void dia(float d, float *o)  
{  
    *o = 3.14 * d; 
}  
