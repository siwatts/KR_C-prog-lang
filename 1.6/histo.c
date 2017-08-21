#include <stdio.h>

void printBar(int len)
{
    printf("%6d |", len);
    for (int i = 0; i < len; i++)
    {
        printf("=");
        //printf("+");
    }
}

int maxValue(int array[], int len)
{
    int max = 0;
    for (int i = 0; i < len; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

void printHistogram(int counts[], int arrayLen)
{
    int max = maxValue(counts, arrayLen);

    for (int row = 0; row < max + 1; row++)
    {
        for (int col = 0; col < arrayLen; col++)
        {
            if (max - counts[col] == row)
                printf(" __ ");
            else if (max - counts[col] <= row)
               printf("|__|");
            else 
               printf("    "); 
        }
        printf("\n");
    }
    for (int col = 0; col < arrayLen; col++)
        printf("====");
    printf("\n");
    for (int col = 0; col < arrayLen; col++)
    {
        printf("%3d", col + 1);
        if (col == arrayLen - 1)
            printf("+");
        else
            printf(" ");
    }
    printf("\n");
}

int main()
{
    int maxLength = 20;

    int c, length = 0;
    int count[maxLength];
    for (int i = 0; i < maxLength; i++)
        count[i] = 0;

    // Count word lengths.
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (length > 0 && length < maxLength)
                count[length - 1]++;
            else if (length >= maxLength)
                count[maxLength - 1]++;

            length = 0;
        }
        else
            length++;
    }

    // Print histogram.
    printf("Horizontal histogram\n");
    printf("Word lengths:\n");
    for (int i = 0; i < maxLength; i++)
    {
        printf("%3d", i + 1);
        // If last bucket, includes lengths greater too so print "+".
        if (i == maxLength - 1)
            printf("+");
        else
            printf(" ");
        printBar(count[i]);
        printf("\n");
    }

    printf("\nVertical histogram\n");
    printHistogram(count, maxLength);
}
