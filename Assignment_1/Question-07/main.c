#include <stdio.h>

int main() {
    int p, r, n;
    scanf("%d %d %d", &p, &r, &n);
    float interest = (float)(p * r * n) / 100;
    float amount = p + interest;
    float discount = interest * 0.02;
    float settlement = amount - discount;
    printf("%.2f\n%.2f\n%.2f\n%.2f", interest, amount, discount, settlement);
    return 0;
}
