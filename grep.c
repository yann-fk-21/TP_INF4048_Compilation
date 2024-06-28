/*
    exo6.c

    Simulation of 'grep' linux terminal command.
    It uses a regular expression to evaluate a string.

*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TO_READ 150



int grep1(char* string, char* word)
{
    int count = 0;

    for(int i = 0; string[i] != '\0'; ++i)
    {
        int j = 0;
        while(word[j] != '\0' && string[i + j] == word[j])
            j++;
        
        printf("%s", count);
        
        if(word[j] == '\0')
            count++;
    }

    return count;
}



int grep2(char* string, char* reg)
{

    return 0;
}




int main(int argc, char* argv[])
{
    char* file_name, *regex;
    if(argc > 1)
    {
        strcpy(file_name, argv[1]);
        if(argc == 2)
        {
            printf("A regex was not provided.");
            return 0;
        }
        strcpy(regex, argv[2]);
    }
    else
        strcpy(file_name, "To learn.txt");


    FILE* file;
    file = fopen(file_name, "r");

    if(file == NULL)
    {
        printf("Failed to load the file %s.", file_name);
        return 0;
    }
    else
    {
        int count = 0;
        char line[MAX_TO_READ];
        
        while(fgets(line, MAX_TO_READ, file) != NULL)
        {
            printf(" provided %s.", line);
            count += grep1(line, regex);
        }
        
        printf("Number of occurences found: %d.", count);
    }

    return 0;
}


