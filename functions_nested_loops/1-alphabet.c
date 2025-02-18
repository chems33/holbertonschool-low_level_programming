#include <unistd.h>

/**
 * _putchar - Writes a single character to the standard output
 * @c: The character to print
 8*
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
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

    /* Print the entire alphabet and the newline in one go */
    for (int i = 0; i < 27; i++) /* 26 letters + 1 newline */
    {
        _putchar(alphabet[i]);
    }
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return (0);
}
