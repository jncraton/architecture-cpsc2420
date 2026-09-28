#include <stdio.h>

int main(void) {
    float f = 16777210;

    for (int i = 0; i < 10; i++) {
        f += 1;
        printf("%f\n", f);
    }
}
