#ifndef THREAD_FUNCTIONS_H
#define THREAD_FUNCTIONS_H

#include <pthread.h>

#define NUM_THREADS 2

typedef struct {
    char *name;
    char *message;
} ChildThreadArgs;

void *child_thread_function(void *arg);

#endif
