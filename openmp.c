
#include <stdio.h>
#include <time.h>
#include <omp.h>

int main() {
    int i;
    #pragma omp for
    for (i = 0; i < 10000000000; i++) {
        printf("Thread %d processing #%d\n", omp_get_thread_num(), i);
    }
    return 0;
}
