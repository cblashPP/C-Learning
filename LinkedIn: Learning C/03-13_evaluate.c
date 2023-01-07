#include <stdio.h>
void evaluate(int);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if (x > 10)
        puts("Value is greater than 10");
    else if (x < 10)
        puts("Value is less than 10");
    else
        puts("Value is equal to 10");
    return;
}

