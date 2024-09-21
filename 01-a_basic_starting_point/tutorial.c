#include "config.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("%s Version %d.%d\n", argv[0], TUTORIAL_VERSION_MAJOR,
               TUTORIAL_VERSION_MINOR);
        printf("Usage: %s number\n", argv[0]);
        return 1;
    }

    bool is_ltzero = false;
    if (atoi(argv[1]) < 0) {
        is_ltzero = true;
    }

    printf("Is less than 0: %s", is_ltzero ? "True" : "False");

    return 0;
}
