//This is the header file

#ifndef QUEUE_H
#define QUEUE_H

// Size for english alphabet (A to Z)
#define MAXQUEUE            26  
// Maximum length for user input
#define MAX_MESSAGE_LENGTH  200  



//structure of  CircularQueue

typedef struct {
    char items[MAXQUEUE];
    int front;
    int rear;
    int count;
} CircularQueue;




void initAlphabetQueue(CircularQueue *q); // 

char shiftChar(CircularQueue *q, char ch, int key); // for shifting and hndling case and non alperberts.

void encryptMessage(CircularQueue *q, char *message, int key); // for Encrypts a message

void decryptMessage(CircularQueue *q, char *message, int key);  // for decrypts a message

#endif



