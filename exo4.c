/*
    exo4.c

    Contains an implementation of a simple lexical analyser
    an some other tools it could require.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define CHUNKS_SIZE 100



char* lexAnal(char* string, int start, int end)
{
    /*
        lexAnal

        Lexical analysis of a string input in the format 21+12*45
        Identifies lexems and outputs a string in the format:

        <int:21><operateur:+><int:12><operateur:*><int:45>
    
    */
    
    
    // printing the string to analyse
    // char t[CHUNKS_SIZE] = {0};
    // strncpy(t, string + start, end - start);
    // printf("%s - %d - %d\n", t, start, end);
    
    
    if(start == end)
        return "parsing error";


    char output[CHUNKS_SIZE] = {0}, temp[CHUNKS_SIZE] = {0};

    int exp = 0; // Whether the string is an expression or a number

    for(int i = start; i < end; i++)
    {

        if(string[i] == '+' || string[i] == '*') // Whenever a '+' or a '*' is found
        {
            exp = 1; // This is an expression

            // We process the first part and store it
            strcpy(temp, lexAnal(string, start, i));
            if(!strcmp(temp, "parsing error"))
                return "parsing error2";
            else
                strcat(output, temp);

            // And then concatenate to that analysed part, the rest of the string but, analysed too
            char sign[2] = {0};

            strncpy(sign, string + i, 1);

            // Sign concatanation
            strcat(output, "<operator:");
            strcat(output, sign);
            strcat(output, ">");

            // Second part concatanation
            strcpy(temp, lexAnal(string, i + 1, end));
            if(!strcmp(temp, "parsing error"))
                return "parsing error1";
            else
                strcat(output, temp);

            break;
        }

    }

    if (exp == 0)
    {
        int well = 1;
        for(int i = start; i < end; ++i)
        {
            if(string[i] == '.')
                well = 0;
        }
        if(!well || end - start != 2)
            return "parsing error";
            
        strncpy(temp, string + start, end-start);
        strcpy(output, "<int:");
        strcat(output, temp);
        strcat(output, ">");
        
    }
    
    char* out = output;
    return out;

}




int main(int argc, char* argv[])
{

    char input[CHUNKS_SIZE];
    if(argc > 1)
        strcpy(input, argv[1]);
    
    else
        strcpy(input, "21+12*45");
    
    
    char output[CHUNKS_SIZE] = {0};

    strcpy(output, lexAnal(input, 0, sizeof(input)/sizeof(char)));

    printf("\n%s\n\n", output);

    return 0;
}