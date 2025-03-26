#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8];
    printf("Digite algo: ");
    gets(buffer); // Using gets() makes the program vulnerable to buffer overflow
    printf("Você digitou: %s\n", buffer);
    return 0;
}

// Solution: fgets(buffer, sizeof(buffer), stdin); // Safe use of fgets()
// Because fgets() limits the input to the buffer size, avoiding overflow.
