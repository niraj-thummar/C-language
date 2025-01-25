//. Print all ASCII character with their value
#include <stdio.h>

int main() {
    int i;

    printf("ASCII Character List:\n");
    
    printf("Character\tASCII Value\n");

    for(i = 0; i <= 127; i++) {
        printf("   %c\t\t   %d\n", i, i);
    }

    return 0;
}