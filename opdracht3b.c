/* Rutger Harmers */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[10];
    printf("Voer hier uw zin in: ");

    /* Input zin */
    gets(x);
  
    /* Strlen() berekent lengte, print uitkomst in printf() */
    printf("\nUw zin bestaat uit %d karakters.", strlen(x));
    return(0);
}
