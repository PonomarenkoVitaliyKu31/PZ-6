#include <stdio.h>
#include <pthread.h>
#include "thread.h"

int main() {
    pthread_t thread;
    struct ChildThreadArgs args;
    printf("Enter the number 'N' of Catalan Numbers to calculate: ");
    scanf("%d", &args.n);
    pthread_create(&thread, NULL, thread_function, &args);
    pthread_join(thread, NULL);
    printf("Last calculated Catalan Number: %llu\n", args.catalan_result);
    printf("Count of Prime Numbers up to last calculated Catalan Number: %d\n", args.prime_count);
    return 0;
}
