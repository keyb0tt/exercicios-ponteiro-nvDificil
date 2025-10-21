// Crie uma função que conte o tamanho de uma string sem usar strlen().
#include <stdio.h>
#include <stdlib.h>

int stringSizeCounter(char *stringPtr)
{
    int stringSize = 0;
    while(*stringPtr != '\0')
    {
        stringPtr++ && stringSize++;
    }
    
    return stringSize;
}

int	main()
{
    system("clear");
    char name1[] = "Kaique";
    char *name1ptr = name1;
    
    printf("\n\nTamanho da string '%s': %d caracteres\n\n\n",name1, stringSizeCounter(name1ptr));

    return 0;
}
