#include <stdio.h>

main()
{
    printf("getchar() != EOF ?\n");
    printf("%d\n", getchar() != EOF);

    printf("\n");
    printf("EOF = %d\n", EOF);
}
