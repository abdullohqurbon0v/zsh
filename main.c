#include <stdio.h>
#include "./lib/strlen.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./main <string>\n");
        return 1;
    }

    printf("Length: %d\n", my_strlen(argv[1]));
    return 0;
}
