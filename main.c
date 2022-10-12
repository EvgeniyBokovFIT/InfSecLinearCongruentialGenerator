#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinearCongruentialGenerator.h"

int main(int argc, char** argv) {


    int input_size;

    char *end;

    printf("%s\n", "Enter the input size");
    char size_buf[10];
    while (fgets(size_buf, sizeof(size_buf), stdin)) {
        input_size = strtol(size_buf, &end, 10);
        if (end == size_buf || *end != '\n') {
            printf("Please enter an integer: ");
        } else break;
    }
    char* input_text = malloc(input_size);

    printf("%s\n", "Enter the input text");
    gets(input_text);

    char mode_buf[1];
    char mode;

    printf("%s\n", "Enter the mode c/d");

    scanf(" %c",&mode);

    char* result_text = malloc(strlen(input_text) * sizeof(char));
    if(mode == 'c') {
        encrypt(input_text, result_text);
    } else {
        decrypt(input_text, result_text);
    }

    printf("%s\n", result_text);

    return 0;
}
