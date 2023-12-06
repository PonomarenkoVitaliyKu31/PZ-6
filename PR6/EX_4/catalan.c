#include "catalan.h"

unsigned long long calculate_catalan(int n) {
    if (n <= 1) {
        return 1;
    }
    unsigned long long result = 0;
    for (int i = 0; i < n; i++) {
        result += calculate_catalan(i) * calculate_catalan(n - i - 1);
    }
    return result;
}
