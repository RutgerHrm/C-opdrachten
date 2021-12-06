/* Rutger Harmers */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* In de main worden antwoorden afgelezen met een for loop */
int main()
{
    int i;
    struct main{
    char naam[10];
    int leeftijd;
      
    struct opleiding{
    char naam[10];
    int instroomjaar;
}   
    opleiding;
};
    struct main x[4];
    for (i = 0; i < 4; i++)
    {
        printf("Hoe heet je?   ");
        scanf("%s", x[i].naam);
        printf("Welke opleiding ben je aan het doen?   ");
        scanf("%s", x[i].opleiding);
        printf("Hoe oud ben je?   ");
        scanf("%d", &x[i].leeftijd);
        printf("Welk jaar ben jij ingestroomd?   ");
        scanf("%d", &x[i].opleiding.instroomjaar);
        printf("\n");
    }
    
    printf("Dit zijn uw antwoorden:\n");
    for (i = 0; i < 4; i++)
    {
        printf("%f\n%d\n%s\n%f\n\n", 

        x[i].naam, x[i].opleiding, x[i].leeftijd, x[i].opleiding.instroomjaar);
    }
    return(0);
}
