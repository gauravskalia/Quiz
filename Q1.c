#include <stdio.h>

void cut_squares(int n, int m) {
    int min = n < m ? n : m;
    for (int i = min; i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            for (int j = 0; j < n / i; j++) {
                for (int k = 0; k < m / i; k++) {
                    printf("%d x %d square at (%d, %d)\n", i, i, j * i, k * i);
                }
            }
            return;
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    cut_squares(n, m);
    return 0;
}