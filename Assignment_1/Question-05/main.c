#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;
    scanf("%f %d %d", &mileage, &petrol, &distance);
    float max_dist = mileage * petrol;
    if (max_dist >= distance) {
        printf("Can reach");
    } else {
        printf("Cannot reach");
    }
    return 0;
}
