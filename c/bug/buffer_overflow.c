#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8];
    printf("Type something: ");
    gets(buffer); // Using get() makes the program vulnerable to buffer overflow
    printf("You typed: %s\n", buffer);
    return 0;
}
