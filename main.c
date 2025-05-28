// This is main c file

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "queue_header.h"

// Encrypts a message

void encryptMessage(CircularQueue *q, char *message, int key) {
    printf("\nEncrypted Message: ");

    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", shiftChar(q, message[i], key));
    }
    printf("\n\n ***** Thank You  .. ******\n");
}
