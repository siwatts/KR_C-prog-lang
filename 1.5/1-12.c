#include <stdio.h>

int main()
{
    int c;
    int blankLine = 1;

    while ((c = getchar()) != EOF)
    {
        if (c != '\n' && c != '\t' && c != ' ')
        {
            putchar(c);
            blankLine = 0;
        }
        else if (!blankLine)
        {
            putchar('\n');
            blankLine = 1;
        }
    }

    printf("Program complete.\n");
}
