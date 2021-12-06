/* Rutger Harmers */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x; int i;
int maxArrays(float *array1pointer, float *array2pointer, float *array3pointer);

int main()
{
    float arr1[4]; float arr2[4]; float arr3[4]; float *arraypointer; float *arraypointer2; float *arraypointer3;

    /* Array 1 */
    arr1[0] = 0.7; 
    arr1[1] = 3.3; 
    arr1[2] = 0.5; 
    arr1[3] = 10.3; 
    
    /* Array 2 */
    arr2[0] = 4.1; 
    arr2[1] = 1.5; 
    arr2[2] = 0.5; 
    arr2[3] = 2.3;

    arraypointer = &arr1[0]; arraypointer2 = &arr2[0]; arraypointer3 = &arr3[0];

    /* Print array 1 */
    printf("Waarden array 1:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%0.1f, ", arr1[i]);
    }
    printf("\n");

    /* Print array 2 */
    printf("Waarden array 2:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%0.1f, ", arr2[i]);
    }
    printf("\n");
    printf("\n");

    /* Hulpfunctie voor array 3 */
    maxArrays(arraypointer, arraypointer2, arraypointer3);

    for (x = 0; x < 4; x++)
    {
        printf("%g, ", arr3[x]);
    }
    return 0;
}


int maxArrays(float *array1pointer, float *array2pointer, float *array3pointer)
{
    printf("Waarden array 3:\n");
    for (i = 0; i < 4; i++)
    {
    if (array1pointer[i] > array2pointer[i])
    {
      array3pointer[i] = array1pointer[i];
    }
    else
    {
      array3pointer[i] = array2pointer[i];
    }
    }
}
