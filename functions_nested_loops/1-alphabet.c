#include <unistd.h>

/**
 * _putchar - Writes a single character to the standard output
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet from 'a' to 'z',
 * followed by a new line.
 8*/
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        _putchar(alphabet[i]);
    }

    _putchar('\n');
}

/**
 * main - Entry point of the program
 *
2 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return (0);
}
