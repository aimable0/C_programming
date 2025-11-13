#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

// share data
char data[100];
int stage = 0;

// Thread 1: Reader
void* reader(void* arg) {
    printf("Reader: Enter some text: ");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, '\n')] = '\0';
    stage = 1;
    return NULL;
}

// Thread 2: processor
void *processor(void* arg) {
    while (stage < 1) {
        usleep(100);
    }

    printf("Processor: Converting to uppercase...\n");
    for (int i = 0; data[i]; i++) {
        data[i] = toUpper(data[i]);
    }
    stage = 2;
    return NULL;
}

// thread 3: writer
void *writer(void* arg) {
    while(stage < 2) {
        usleep(100);
    }
    printf("Write: Final output: %s\n", data);
    return NULL;
}

int main() {
    pthread_t t1, t2, t3;

    pthread_create(&t1, NULL, reader, NULL);
    pthread_create(&t2, NULL, processor, NULL);
    pthread_create(&t3, NULL, writer, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    return 0;
}