//
//  05-04_pointerref.c
//  first_test
//
//  Created by Conrad Blash on 1/3/23.
//

#include <stdio.h>


int main ()
{
    char a, b, c;
    char *p;
    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';
    printf ("The value of a, b, and c are %c, %c, and %c, respectively.\n", a, b, c);
    return (0);
}
