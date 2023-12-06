#ifndef THREAD_H
#define THREAD_H

struct ChildThreadArgs {
    int n;
    unsigned long long catalan_result;
    int prime_count;
};

void *thread_function(void *arg);

#endif
