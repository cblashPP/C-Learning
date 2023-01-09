//
//  01-02_assignment_challenge.c
//  Advanced Time
//
//  Created by Conrad Blash on 1/9/23.
//


/*
 Prompt:
 1. Fetch a value from input and modify it
 2. Multiply it by 5 and display the result
 3. Divide it by 3 and display the result
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float in;
    printf("Please input a number, decimal ok: ");
    scanf("%f", &in);
    float mod = in;
    mod *= 5;
    printf("\n%f multiplied by 5 is %f\n", in, mod);
    printf("%f divided by 3 is ", mod);
    mod /= 3;
    printf("%f\n", mod);
    return 0;
}
