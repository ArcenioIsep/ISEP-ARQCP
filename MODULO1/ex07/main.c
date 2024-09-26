#include <stdio.h>
#include "get_ascii_code.h"

int main() {
    char input_char = 'a';  // Example character 'a'
    int ascii_code = get_ascii_code(input_char);
    printf("The ASCII code of '%c' is %d\n", input_char, ascii_code);
    return 0;
}
