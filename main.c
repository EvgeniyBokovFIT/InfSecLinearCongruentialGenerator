#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinearCongruentialGenerator.h"

int main() {
    char* plaintext = "message";
    char* ciphertext = malloc(strlen(plaintext) * sizeof(char));
    char* decrypted_text = malloc(strlen(ciphertext) * sizeof(char));
    encrypt(plaintext, ciphertext);
    printf("%s\n", ciphertext);
    decrypt(ciphertext, decrypted_text);
    printf("%s\n", decrypted_text);

    return 0;
}
