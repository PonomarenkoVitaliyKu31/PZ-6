#include <stdio.h>
#include <pthread.h>
#include "catalan.h"
#include "prime.h"
#include "thread.h"

void *thread_function(void *arg) {
    struct ChildThreadArgs *args = (struct ChildThreadArgs *)arg;
    for (int i = 0; i <= args->n; i++) {
        args->catalan_result = calculate_catalan(i);
        printf("Thread: Calculated Catalan Number for N = %d: %llu\n", i, args->catalan_result);
        args->prime_count = 0;  // Reset prime count for each Catalan number
        for (int j = 2; j <= args->catalan_result; j++) {
            if (is_prime(j)) {
                args->prime_count++;
            }
        }
        printf("Thread: Count of Prime Numbers for N = %d: %d\n", i, args->prime_count);
    }
    pthread_exit(NULL);
}
