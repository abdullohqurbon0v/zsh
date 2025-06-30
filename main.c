#include <stdio.h>
#include <string.h>
#include "./lib/strlen.h"
#include "zsh.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./main <string>\n");
        return 1;
    }

    char cmd[256] = {0};
    for (int i = 1; i < argc; i++) {
        strcat(cmd, argv[i]);
        if (i < argc - 1) {
            strcat(cmd, " ");
        }
    }
    zsh(cmd);

    printf("Command Prompt: \"%s\"\n", cmd);
    printf("Length: %d\n", my_strlen(cmd));

    return 0;
}
