#include <stdio.h>
#include "get_ascii_code.h"

int main() {
    int input_int = 97;  // Example intacter 'a'
    int ascii_code = get_ascii_code(input_int);
    printf("The character for ASCII code %d is '%c'\n", input_int, ascii_code);
    return 0;
}
