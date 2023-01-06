//
//  02_Math_Quiz.c
//  first_test
//
//  Created by Conrad Blash on 12/27/22.
/*
 This code is brought to you by your honest and reliable hardware engineer,
 Journeyer to the east and to the west,
 Alumnus of the majestic black mecca,
 Lover of wretched automatons of our daily life!
 The one, the only Conrad Blash
 */


#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Enter 2 numbers: ");
    scanf("%f %f", &a, &b);
    printf("Here's some math!\n");
    printf("%f + %f = %f\n", a, b, a+b);
    printf("%f - %f = %f\n", a, b, a-b);
    printf("%f * %f = %f\n", a, b, a*b);
    printf("%f / %f = %f\n", a, b, a/b);
    printf("%f to the power of %f = %f\n", a, b, pow(a,b));
    printf("The square root of %f = %f\n", a, sqrt(a));
    printf("The square root of %f = %f\n", b, sqrt(b));
    printf("Goodbye!\n");
}
