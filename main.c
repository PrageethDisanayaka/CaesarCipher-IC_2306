
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
