
#include <stdio.h>
#include <stdlib.h>

int f91(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return f91(f91(n + 11));
    }
}

int main(int argc, char **argv) {
    int n; 
    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        printf("Chose an integer: ");
        scanf("%i", &n);
    }
    printf("f91(%i): %i\n", n, f91(n));

    return 0;
}
