

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




int main() {
    CircularQueue q; // Declare a CircularQueue instance
    initAlphabetQueue(&q); // Initialize the queue

    char choice;
    char message[MAX_MESSAGE_LENGTH];
    int key;

    int scanResult; // For scanf validation
    char c;         // For clearing input buffer



    // loop for  Encryption /Decryption

    while (1) {
        printf("Encryption (E) or Decryption (D)?: ");
        scanResult = scanf(" %c", &choice);

        // Clear buffer after scanf
        while ((c = getchar()) != '\n' && c != EOF);

        if (scanResult != 1) {
            printf("Invalid input. Please enter a single character (E or D).\n");
            continue;
        }

        choice = toupper(choice);

        if (choice == 'E' || choice == 'D') {
            break; // Valid choice
        } else {
            printf("Invalid choice. Please enter 'E' for Encryption or 'D' for Decryption.\n");
        }
    }

    // Message Input from user

    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0; // Remove trailing newline

    // Input loop for Shift Key

    while (1) {
        printf("Enter shift key: ");
        scanResult = scanf("%d", &key);

        // Clear buffer after scanf
        while ((c = getchar()) != '\n' && c != EOF);

        if (scanResult == 1) {
            break; //  Valid integer key
        } else {
            printf("Invalid input. Please enter an integer for the shift key.\n");
        }
    }

    printf("\n ***** Convertion succesfull .. ******\n");

  // Perform encryption or decryption

    if (choice == 'E') {
        encryptMessage(&q, message, key);
    } else if (choice == 'D') {
        decryptMessage(&q, message, key);
    } else {

        printf("An unexpected error occurred.\n\n");
    }

    return 0;
}
