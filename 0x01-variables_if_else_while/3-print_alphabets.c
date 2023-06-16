#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    // Print lowercase letters
    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    // Print uppercase letters
    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    // Print a newline
    putchar('\n');

    return 0;
}
