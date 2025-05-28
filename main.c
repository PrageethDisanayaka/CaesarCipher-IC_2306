
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

// Decrypts a message

void decryptMessage(CircularQueue *q, char *message, int key) {
    printf("\nDecrypted (Original) Message: ");

    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", shiftChar(q, message[i], -key)); // Decrypt by reverse shift
    }
    printf("\n\n ***** Thank You  .. ******\n");
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
