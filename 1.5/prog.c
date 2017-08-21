#include <stdio.h>

// Copy input to output, version 1
int main()
{
    // File in/out:
    //int c;
    //while ((c = getchar()) != EOF) {
        //putchar(c);
    //}

    // Char counter:
    /*
    long nc;
    nc = 0;
    while (getchar() != EOF)
        nc++;
    printf("%ld\n", nc);
    */

    // Char counter - for loop:
    /*
    double nc;
    for (nc = 0; getchar() != EOF; nc++)
    {
    }
    printf("%.0f\n", nc);
    */

    // Line counter:
    /*
    int c;
    int nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            nl++;
        }
    }
    printf("%d newlines entered.\n", nl);
    */

    // 1-8 - Count blanks, tabs, and newlines.
    /*
    printf(" - 1-8 - Count blanks, tabs, and newlines.\n");
    int c, count = 0;
    while ((c = getchar()) != EOF)
    {
        // Without if:
        count += (c == ' ' || c == '\t' || c == '\n');
    }
    printf("Blank, tab, or newline chars: %d\n", count);
    */

    // 1-9 - Copy input -> output, replace one or more blanks with single blank.
    /*
    printf(" - 1-9 - Copy input -> output, replace one or more blanks with single blank. -\n");
    int c, lastCharBlank = 0;
    while ((c = getchar()) != EOF)
    {
        int currentBlank = (c == ' ');

        if (!lastCharBlank || !currentBlank)
            putchar(c);

        lastCharBlank = currentBlank;
    }
    */

    /* 1-10 - Tabs to \t, backspaces to \b, backslashes to \\ */
    printf(" - 1-10 - Tabs to \\t, backspaces to \\b, backslashes to \\\\\n");
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}
