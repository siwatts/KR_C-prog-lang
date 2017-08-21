#include <stdio.h>

#define MAX 80

void printCharArray(char[]);

// Print all input lines longer than MAX char.
int main()
{
    int c, i = 0;
    char s[MAX];

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            if (i < MAX)
            {
                // Store in array up to MAX until it crosses max length.
                s[i] = c;
            }
            else if (i == MAX)
            {
                // MAX + 1 char on line so print everything so far.
                // Print array.
                printCharArray(s);
                // And new char.
                putchar(c);
            }
            else // i > MAX
            {
                // Print each subsequent char until line ends.
                putchar(c);
            }
            i++;
        }
        else // Line end.
        {
            if (i > MAX) // This line was printed, so terminate it.
                putchar('\n');
            // Reset counter for new line.
            i = 0;
        }
    }
}

// Put each char of array to stdout.
void printCharArray(char s[])
{
    for (int i = 0; i < MAX; i++)
        putchar(s[i]);
}
