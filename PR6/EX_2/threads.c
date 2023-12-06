#include <stdio.h>
#include "threads.h"

void *thread_function(void *arg) {
    struct ThreadArgs *args = (struct ThreadArgs *)arg;
    for (int i = 1; i <= args->num; i++) {
        printf("Thread %s. %s %d\n", args->name, args->str, i);
    }
    return NULL;
}
