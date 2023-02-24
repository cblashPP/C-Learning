//
//  01-05_ternary_operator.c
//  Advanced Time
//
//  Created by Conrad Blash on 2/17/23.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/*
 Prompt:
 1. Use the ternary operator
 2. Fetch a Positive Integer from the user greater than zero
 3. Report whether the input is odd or even

 What I added:
 detect if incorrect inputs are fetched and re-prompt for user input if encountered
 */

typedef enum {T, F} boolean;  // improv Boolean data type.
int main () {
    boolean valid = F; //Track if the input is valid or invalid, initialize to avoid errors later
    char *input = malloc(sizeof(char)* 256); //allocate memory for the input buffer
    //Chose a string/character array in order to better identify incorrect input characters
    
    do { //Begin first loop iteration.
        printf("Please enter a positive integer greater than 0: "); //prompt user for input
        scanf("%s", input);  //receive input as string of characters
        
        for (int x = 0; input[x] != '\0'; x++)  //begin checking each input character
        {
            if ( !(isdigit(input[x])) ) { //check if the input isn't a number character
                valid = F; // set valid flag to false, as input must be an integer number
                printf("Your input was invalid.\n"); // display error
                break; //break from character detection loop
            }
            else {  // otherwise the input is valid and set the valid flag to true
                valid = T;
            }
            if ( (input[x+1] == '\0') && (atoi(input) == 0)) {
                //if we're close to the end of the user input, check if the user input 0, 00, 000, etc...
                valid = F;  // set valid flag to false, as input must be greater than zero
                printf("Your input was invalid.\n"); // display error
                break; // break from character detection loop and re-prompt
            }
        }
    } while(valid == F);  // Check input validity and loop back to user input process if invalid
        
    int y = atoi(input);  //Convert the positive non-zero number from characters to an integer
    printf("%d is an %s number.\n", y, ( ((y % 2) != 0) ? "odd" : "even") );
    // Display if their number is even or odd as per theh prompt.
    
    return 0;
}
