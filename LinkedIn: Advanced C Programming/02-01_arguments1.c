#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("There were %d command line arguments\n",argc);
    printf("The name of this program is: %s.\nOther arguements include:\n", argv[0]);
    for (int x = 1; x < argc; x++) {
        printf("%s\n", argv[x]);
    }
	return(0);
}

