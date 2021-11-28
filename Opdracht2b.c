 
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
