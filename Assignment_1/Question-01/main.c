#include <stdio.h>
#include <string.h>

int main() {
    int d;
    char m[10];
    scanf("%d %s", &d, m);
    float fare = 100;
    if (d > 10) {
        fare = 100 + (d - 10) * 20;
    }
    if (strcmp(m, "true") == 0) {
        fare = fare - (fare * 0.10);
    }
    printf("Final Fare: ₹%.0f", fare);
    return 0;
}
