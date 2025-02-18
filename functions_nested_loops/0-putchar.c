#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a new line
 * using the write function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
write(1, "_putchar\n", 9);

return (0);
}
