//
//  04-04_combinestrings.c
//  first_test
//
//  Created by Conrad Blash on 12/27/22.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char time[20];
    char feel[20];
    char greeting[42];
    printf("Is it morning, afternoon, evening or night? ");
    scanf("%s", time);
    printf("How do you feel, good, normal, bad? ");
    scanf("%s", feel);
    strcpy(greeting, feel);
    strcat(greeting, " ");
    strcat(greeting, time);
    printf("Ah! Well then, %s!\n", greeting);
}
