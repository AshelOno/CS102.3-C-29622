#include <stdio.h>

int main() {
    char uppercase_letters[] = {'A', 'B', 'C'};
    char lowercase_letters[] = {'a', 'b', 'c'};
    char digits[] = {'0', '1', '2'};
    char special_symbols[] = {'$', '*', '+', '/'};
    char blank_character = ' ';

    printf("Integer equivalents of uppercase letters:\n");
    for (int i = 0; i < sizeof(uppercase_letters) / sizeof(uppercase_letters[0]); i++) {
        printf("%c: %d\n", uppercase_letters[i], uppercase_letters[i]);
    }

    printf("\nInteger equivalents of lowercase letters:\n");
    for (int i = 0; i < sizeof(lowercase_letters) / sizeof(lowercase_letters[0]); i++) {
        printf("%c: %d\n", lowercase_letters[i], lowercase_letters[i]);
    }

    printf("\nInteger equivalents of digits:\n");
    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++) {
        printf("%c: %d\n", digits[i], digits[i]);
    }

    printf("\nInteger equivalents of special symbols:\n");
    for (int i = 0; i < sizeof(special_symbols) / sizeof(special_symbols[0]); i++) {
        printf("%c: %d\n", special_symbols[i], special_symbols[i]);
    }

    printf("\nInteger equivalent of the blank character:\n");
    printf("%c: %d\n", blank_character, blank_character);

    return 0;
}

