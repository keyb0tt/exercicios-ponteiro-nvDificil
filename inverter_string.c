// Crie uma função que receba uma string e a inverta usando apenas ponteiros.
#include <stdio.h>
#include <stdlib.h>

void reverseString(char *mainString)
{
    char *mainStringPtr = mainString;
    int stringSize = 0;
    
    while(*mainStringPtr != '\0')
    {
        printf("%c", *mainStringPtr);
        mainStringPtr++, stringSize++;
    }
    
    printf("\n\nstringsize : %d\n\n", stringSize);
    char *tempStringPtr = (char *)malloc(stringSize * sizeof(char));
    
    int x = stringSize - 1;

    while(*tempStringPtr != '\0')
    {
        *tempStringPtr++ = mainString[x--];
    }


    
    for (int i = 0; i < 6; i++)
    {
        printf("%c", *(tempStringPtr++));
    }
    
    

}

int	main()
{
    system("clear");
    char name1[] = "Kaique";

    printf("\n\n");
    reverseString(name1);
    printf("\n\n\n\n");

    return 0;
}
