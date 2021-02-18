#include <stdio.h>

int main() {
    for (int i = 0; i <7 ; ++i) {
        if ( i > 3)
            continue;
        printf("heihei\n");
    }
    printf("Hello, World!\n");
    return 0;
}
