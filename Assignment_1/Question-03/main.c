#include <stdio.h>

int main() {
    int total, x, y;
    scanf("%d %d %d", &total, &x, &y);
    int ben = (total * x) / 100;
    int rem1 = total - ben;
    int blackbeard = (rem1 * y) / 100;
    int rem2 = rem1 - blackbeard;
    int pirate_share = rem2 / 3;
    printf("%d\n%d\n%d", ben, blackbeard, pirate_share);
    return 0;
}
