// This is main c file

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "queue_header.h"

// Initialize Circular queue

void initAlphabetQueue(CircularQueue *q) {
    q->front = 0;
    q->rear = MAXQUEUE - 1;
    q->count = 0;

    for (int i = 0; i < MAXQUEUE; i++) {
        q->items[i] = 'A' + i; // Populate the queue's items with alphabet chars
        q->count++;
    }

}

// Encrypts a message

void encryptMessage(CircularQueue *q, char *message, int key) {
    printf("\nEncrypted Message: ");

    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", shiftChar(q, message[i], key));
    }
    printf("\n\n ***** Thank You  .. ******\n");
}
