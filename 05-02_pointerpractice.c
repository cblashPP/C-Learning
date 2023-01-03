//
//  05-02_pointerpractice.c
//  first_test
//
//  Created by Conrad Blash on 1/3/23.
//

#include <stdio.h>


int main ()
{
    int hokey;
    int *h;
    
    hokey = 546;
    h = &hokey;
    printf("The location of variable hokey is %p\n", h);
    printf("Confirming location of variable hokey as %p\n", &hokey);
    printf("\nThe value of variable hokey is %d\n", *h);
    printf("Confirming the value of variable hokey as %d\n", hokey);
    
    return (0);
}
