//
// Created by Evgeniy on 12.10.2022.
//

#include <string.h>
#include "LinearCongruentialGenerator.h"

void encrypt(const char* plaintext, char* ciphertext) {
    int multiplier = 5;
    int increment = 12;
    int mod = 23;
    int seed = 4; //z[0]
    int curElem = seed;
    for (int i = 0; i < strlen(plaintext); i++) {
        char symbol = plaintext[i];
        ciphertext[i] = curElem ^ symbol;
        curElem = (curElem * multiplier + increment) % mod; //считаем z[i+1]
    }
}

void decrypt(const char* ciphertext, char* decrypted_text) {
    encrypt(ciphertext, decrypted_text); // в силу инволютивности XOR для декодирования строки выполняем те же действия
}