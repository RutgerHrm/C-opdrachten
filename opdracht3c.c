/* Rutger Harmers */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char naam[20];
    int instroomjaar;
} opleiding;

/* Geneste structure */
typedef struct structmain{
    char naam[20]; /* Naam mag dus max 20 karakters lang zijn */
    int leeftijd;
    opleiding opleiding;
} structmain;

/* In main antwoorden aflezen dmv for loop */
int main()
{
    int i;
    struct structmain questions[4];
    for (i = 0; i < 1; i++)
    {
        printf("Hoe heet u?   ");
        scanf("%s", &questions[i].naam); /* %s = string */
        printf("Welke opleiding ben je aan het doen?   ");
        scanf("%s", &questions[i].opleiding.naam);
        printf("Hoe oud ben je?   ");
        scanf("%d", &questions[i].leeftijd); /* %d = int/digit */
        printf("Welk jaar ben jij ingestroomd?   ");
        scanf("%d", &questions[i].opleiding.instroomjaar);
        printf("\n");
    }

    /* Antwoorden printen dmv for loop */
    for (i = 0; i < 1; i++)
    {
        printf("Uw naam - %s   \n", questions[i].naam);
        printf("Uw opleiding - %s   \n", questions[i].opleiding.naam);
        printf("Uw leeftijd - %d   \n", questions[i].leeftijd);
        printf("Uw opleidingsinstroomjaar - %d   \n", questions[i].opleiding.instroomjaar);
    }
    return(0);
}
