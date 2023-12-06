#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include "thread_functions.h"

int num_iterations;
int min_random_number;
int max_random_number;
int target_random_number;
int exit_condition = 0;

pthread_mutex_t exit_condition_mutex = PTHREAD_MUTEX_INITIALIZER;

void set_exit_condition() {
    pthread_mutex_lock(&exit_condition_mutex);
    exit_condition = 1;
    pthread_mutex_unlock(&exit_condition_mutex);
}

int get_exit_condition() {
    int result;
    pthread_mutex_lock(&exit_condition_mutex);
    result = exit_condition;
    pthread_mutex_unlock(&exit_condition_mutex);
    return result;
}

int main() {
    pthread_t child_threads[NUM_THREADS];
    ChildThreadArgs args[] = {
            {"1", "Message1"},
            {"2", "Message2"}
    };

    printf("Enter the number of iterations: ");
    scanf("%d", &num_iterations);
    printf("Enter the minimum random number: ");
    scanf("%d", &min_random_number);
    printf("Enter the maximum random number: ");
    scanf("%d", &max_random_number);
    printf("Enter the target random number: ");
    scanf("%d", &target_random_number);

    srand(time(NULL));

    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_create(&child_threads[i], NULL, child_thread_function, &args[i]) != 0) {
            perror("pthread_create");
            exit(1);
        }
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_join(child_threads[i], NULL) != 0) {
            perror("pthread_join");
            exit(1);
        }
    }

    printf("Main Thread. All child threads have completed.\n");

    return 0;
}
