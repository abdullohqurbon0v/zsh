#include <stdio.h>
#include <string.h>
#include "zsh.h"

void zsh(char *str) {
    char *cmd = strtok(str, " ");
 
    if (cmd == NULL) return;
    if (strcmp(cmd, "ls") == 0) {
        // ls();
    printf("ls work\n");
    } else if (strcmp(cmd, "cat") == 0) {
        // do_cat();
    } else if (strcmp(cmd, "pwd") == 0) {
        // do_pwd();
    } else if (strcmp(cmd, "mkdir") == 0) {
        // do_mkdir();
    } else if (strcmp(cmd, "touch") == 0) {
        // do_touch();
    } else if (strcmp(cmd, "echo") == 0) {
        // do_echo();
    } else if (strcmp(cmd, "cd") == 0) {
        // do_cd();
    } else if (strcmp(cmd, "exit") == 0) {
        // do_exit();
    } else {
        printf("Unknown command: %s\n", cmd);
    }
}
