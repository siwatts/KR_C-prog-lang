#include <stdio.h>

#define MAXLINE 50

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

// Print longest input line.
int main()
{
    int len;    // Current line length
    int max;    // Max line length seen so far
    char line[MAXLINE];     // Current input line
    char longest[MAXLINE];  // Longest line saved here

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    // There was a line?
    if (max > 0)
        printf("Found the longest line with %d characters:\n%s\n", max, longest);

    return 0;
}

// getLine: Read a line into s, return length
int getLine(char s[], int lim)
{
    int c, i = 0, count = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        count++;
        if (i < lim - 2)
        {
            s[i] = c;
            i++;
        }
    }

    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return count;
}

// copy: Copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    for (int i = 0; (to[i] = from[i]) != '\0'; i++)
    { }
}
