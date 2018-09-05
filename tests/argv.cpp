#include <stdio.h>

int main(int argc, char **argv)
{
    if(1 == argc) {
        printf("  argc = 1\n");
    }
    else if(1 < argc) {
        printf("  argv[1] = %s\n", argv[1]);
    }
    return 0;
}
