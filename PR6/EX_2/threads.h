#ifndef THREADS_H
#define THREADS_H

struct ThreadArgs {
    char *name;
    char *str;
    int num;
};

void *thread_function(void *arg);

#endif
