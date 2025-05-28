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


// Shifts a single alphabetic character based on a given key.

char shiftChar(CircularQueue *q, char ch, int key) {
    if (!isalpha(ch)) {
        return ch;
    }

    int isLower = islower(ch);
    ch = toupper(ch);

    int idx = ch - 'A';
    int newIdx = (idx + key % MAXQUEUE + MAXQUEUE) % MAXQUEUE; // Handle wrap-around and negative keys

    char shifted = q->items[newIdx]; // Get shifted char from queue's items

    return isLower ? tolower(shifted) : shifted; // Restore original case
}
