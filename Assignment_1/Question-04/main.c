#include <stdio.h>

int main() {
    int d1, c1, d2, c2;
    scanf("%d %d %d %d", &d1, &c1, &d2, &c2);
    int total_d = d1 + d2;
    int total_c = c1 + c2;
    total_d += total_c / 100;
    total_c = total_c % 100;
    printf("%d\n%d", total_d, total_c);
    return 0;
}
