//
//  03-03_makeadecision.c
//  first_test
//
//  Created by Conrad Blash on 12/27/22.
//

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to select a color:\n");
    printf("1 for Red, 2 for Green, 3 for Blue... \t");
    scanf("%d", &num);
    switch(num)
    {
        case(1):
            printf("\nRed\n");
            break;
        case(2):
            printf("\nGreen\n");
            break;
        case(3):
            printf("\nBlue\n");
            break;
        default:
            printf("\nThat is not a valid input, please restart the program.\n");
            return(1);
            break;
    }
    
    return (0);
}
