#include <stdio.h>

int main() {
    char buffer[8];
    printf("Type something: ");
    fgets(buffer, sizeof(buffer), stdin); // Safe use of fgets()
    printf("You typed: %s\n", buffer);
    return 0;
}
