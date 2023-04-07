#include <stdio.h>
#include <string.h>

void remove_char(char *str, char c)
{
    int len = strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main()
{
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf("%c", &c);

    remove_char(str, c);

    printf("Modified string: %s", str);

    return 0;
}
