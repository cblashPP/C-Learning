//
//  02-02_reading_arguements.c
//  Advanced Time
//
//  Created by Conrad Blash on 2/27/23.
//

/*
 Prompt:
 1. Read the command line by examing the main() function's arguements
 2. Determine if a single arguement was typed
 3. Display an error message if the single arguement was absent
 */
#include <stdio.h>


int main(int argc, const char *argv[]){
    printf("Now checking for command line arguements.......\n");
    if (argc > 1) { // check if there are any arguements besided the default title
        printf("Success, Arguements present, exiting program\n");
        return 1; // exit with 1 when arguements are found
    } else { // otherwise exit the program with error message
        printf("Error, no arguements present, exiting program");
        return 2;  // exit with 2 when no arguements found
    }
    return 0; //Default exit code
}
