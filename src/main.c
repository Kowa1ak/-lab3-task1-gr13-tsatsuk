//
// created by danila tsatsuk
//
//Solve the problem using the function.
//Create a program to delete all letters in even positions in several
//sentences (the sentence is specified by a string in C). The function counts
//the number of deleted letters in a string.

#include <stdio.h>
#include <string.h>

int remove_even_chars(char *str) {
    int len = strlen(str);
    int i, j, count = 0;
    for (i = 1; i < len; i += 2) {
        for (j = i; j < len - 1; j++) {
            str[j] = str[j + 1];
        }
        str[j] = '\0';
        count++;
        len--;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character from fgets
    int count = remove_even_chars(str);
    printf("String after removal of even chars: %s\n", str);
    printf("Number of characters removed: %d\n", count);
    return 0;
}
