//
//  05-10_hellopointer.c
//  first_test
//
//  Created by Conrad Blash on 1/3/23.
//

/*
Prompt:
1. Allocate a text input (char) buffer
2. Prompt the user to type their name
3. Store the name in the input buffer
4. Display the text input as a greeting
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main ()
{
    char *inBuffer = malloc(sizeof(char)*SIZE);
    if (inBuffer == NULL)
    {
        puts("Memory error...\n");
        return (1);
    }
    else
    {
        printf("Please enter your name: \t");
        fgets(inBuffer, 1024, stdin);
        printf("Hello, %s", inBuffer);
        
    }
    return (0);
}
