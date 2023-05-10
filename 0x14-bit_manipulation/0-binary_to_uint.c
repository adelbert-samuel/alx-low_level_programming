/*
 * Auth: Adelbert Samuel
 * File: 0-binary_to_uint.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int binary_to_uint(const char *b) {
    // Check if the input string is NULL
    if (b == NULL)
        return 0;

    // Get the length of the input string
    size_t length = strlen(b);

    // Variable to store the converted number
    unsigned int result = 0;

    // Iterate through each character in the string
    for (size_t i = 0; i < length; i++) {
        // Check if the character is '0' or '1'
        if (b[i] == '0') {
            // Left-shift the result and add 0
            result = (result << 1) + 0;
        } else if (b[i] == '1') {
            // Left-shift the result and add 1
            result = (result << 1) + 1;
        } else {
            // Invalid character encountered, return 0
            return 0;
        }
    }

    // Return the converted number
    return result;
}

int main() {
    const char *binary1 = "101010";
    unsigned int decimal1 = binary_to_uint(binary1);
    printf("Binary: %s\nUnsigned Int: %u\n\n", binary1, decimal1);

    const char *binary2 = "110011";
    unsigned int decimal2 = binary_to_uint(binary2);
    printf("Binary: %s\nUnsigned Int: %u\n\n", binary2, decimal2);

    const char *binary3 = "1234";  // Invalid character '3'
    unsigned int decimal3 = binary_to_uint(binary3);
    printf("Binary: %s\nUnsigned Int: %u\n\n", binary3, decimal3);

    const char *binary4 = NULL;  // NULL string
    unsigned int decimal4 = binary_to_uint(binary4);
    printf("Binary: %s\nUnsigned Int: %u\n\n", binary4, decimal4);

    return 0;
}

