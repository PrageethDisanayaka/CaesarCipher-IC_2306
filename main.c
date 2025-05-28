// Decrypts a message

void decryptMessage(CircularQueue *q, char *message, int key) {
    printf("\nDecrypted (Original) Message: ");

    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", shiftChar(q, message[i], -key)); // Decrypt by reverse shift
    }
    printf("\n\n ***** Thank You  .. ******\n");
}
