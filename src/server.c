#include <stdio.h>
#include "interface.h"
int remove_even(char *str) {
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            count++;
            continue;
        }
        printf("%c", str[i]);
    }
    printf("\n");
    return count;
}