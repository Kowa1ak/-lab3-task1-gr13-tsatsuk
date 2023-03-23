//
// created by danila tsatsuk
//
//Solve the problem using the function.
//Create a program to delete all letters in even positions in several
//sentences (the sentence is specified by a string in C). The function counts
//the number of deleted letters in a string.

#include <stdio.h>
#include <string.h>
#include "interface.h"
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int removed = remove_even(str);
    printf("Number of removed characters: %d\n", removed);
    return 0;
}

