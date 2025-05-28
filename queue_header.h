// This is header file

#ifndef QUEUE_H
#define QUEUE_H

#define MAXQUEUE            26    // Size for english alphabet (A to Z)
#define MAX_MESSAGE_LENGTH  200  // Maximum length for user input


//structure of  CircularQueue

typedef struct {
    char items[MAXQUEUE];
    int front;
    int rear;
    int count;
} CircularQueue;




void initAlphabetQueue(CircularQueue *q);

char shiftChar(CircularQueue *q, char ch, int key); // for shifting and hndling case and non alperberts

#endif
