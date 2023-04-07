#include <stdio.h>
#include <string.h>

#define MAX_CHARS 128

void count_chars(char *str, int *freq)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }
}

int main()
{
    char str[100];
    int freq[MAX_CHARS] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    count_chars(str, freq);

    printf("Frequency of each character:\n");
    for (int i = 0; i < MAX_CHARS; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
