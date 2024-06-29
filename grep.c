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
        
        if(word[j] == '\0')
            count++;
    }

    return count;
}



int grep2(char* string, char* reg)
{
    int count = 0;

    for(int i = 0; string[i] != '\0'; ++i)
    {
        int j = 0, state = 0;

        while(reg[j] != '\0' && reg[j] != '*' && string[i + j] == reg[j])
        {
            state++;
            j++;
        }

        if(reg[j] != '*')
            continue;


        while(reg[j] != '\0' && string[i + j] == reg[j])
        {
            
            j++;
        }
        
        if(reg[j] == '\0')
            count++;
    }

    return count;
}




int main(int argc, char* argv[])
{
    char file_name[100], regex[100];
    if(argc > 1)
    {
        strcpy(regex, argv[1]);
        
        if(argc == 2)
            strcpy(file_name, "To learn.txt");
        else
            strcpy(file_name, argv[2]);


    }
    else
    {
        printf("A regex was not provided.");
        return 0;
    }


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
            count += grep1(line, regex);
        }
        
        printf("Number of occurences found: %d.", count);
    }

    return 0;
}


