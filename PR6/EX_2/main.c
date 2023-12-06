#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "threads.h"

int main() {
    pthread_t threads[4];
    struct ThreadArgs args[] = {
            {"A", "Str1", 3},
            {"B", "Str2", 2},
            {"C", "Str3", 4},
            {"D", "Str4", 5}
    };

    int num_threads = sizeof(threads) / sizeof(threads[0]);

    for (int i = 0; i < num_threads; i++) {
        if (pthread_create(&threads[i], NULL, thread_function, &args[i]) != 0) {
            perror("pthread_create");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i < num_threads; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("pthread_join");
            exit(EXIT_FAILURE);
        }
    }

    return EXIT_SUCCESS;
}
