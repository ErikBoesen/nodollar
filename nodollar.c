#include <stdlib.h>
#include <string.h>
#ifdef DEBUG
#include <stdio.h>
#endif

int main(int argc, char* argv[]) {
    char* args;
    for (int arg = 0; arg < argc; ++arg) {
#ifdef DEBUG
        printf(args);
#endif
        strcat(args, argv[arg]);
    }
    system(args);
}
