#include <stdio.h>
#include <string.h>
#include "./lib/strlen.h"
#include "./lib/strcat.h"
#include "zsh.h"

int main() {
    char cmd[256];

    while (1) {
        printf("zsh > ");
        if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
            break;
        }
        cmd[strcspn(cmd, "\n")] = 0;
        if (strcmp(cmd, "exit") == 0) {
            break;
        }
        zsh(cmd);
        printf("Command Prompt: \"%s\"\n", cmd);
    }

    return 0;
}
