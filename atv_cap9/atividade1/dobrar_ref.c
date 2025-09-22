#include <stdio.h>

void dobrar(int *x) {
    *x = *x * 2;
}

int main() {
    int num = 10;
    dobrar(&num);
    printf("Valor dobrado referencia: %d\n", num);
    return 0;
}
