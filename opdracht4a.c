/* Rutger Harmers */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char abc(FILE *doc);
int main(void)
{
    FILE *doc;
    /* Met bestaand bestant tekst.txt in dezelfde folder als opdracht4a.c */
    doc = fopen("tekst.txt","r");
    if (doc == 0)
{
    /* Error */
    printf("Het programma heeft het bestand niet kunnen openen.");
    return(0);
}
    abc(doc);
    fclose(doc);
    return(0);
}

char abc(FILE *doc)
{
    char x;
    int teller = 0;
    FILE *i;
    
    /* Maakt nieuwe file tekst2 */
    i = fopen("tekst2.txt", "w");
    while ((x = fgetc(doc)) != EOF)
{
    /* Telt karakters, schuift waardes 1 plek op*/
    teller++;
    x = x + 1;
    fputc(x, i);
}
    fclose(i);
    printf("Dit bestand bestaat uit %d karakters." , teller);
}
