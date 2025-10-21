// Crie uma função que receba uma string e a inverta usando apenas ponteiros.
#include <stdio.h>
#include <stdlib.h>

void reverseString(char *mainString)
{
    char *mainStringPtr = mainString;
    int stringSize = 0, x = 0;
    
    while(*mainStringPtr != '\0')
    {
        mainStringPtr++, stringSize++;
    }

    char *tempString = (char *)malloc(stringSize * sizeof(char));

    for (int i = stringSize; i >= 0; i--)
    {
        tempString[x] = *(mainString + i);
        x--;
    }

    for (int i = stringSize; i >= 0; i--)
    {
        mainString[i] = *(tempString + stringSize);
        printf("%c", *mainString);
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
