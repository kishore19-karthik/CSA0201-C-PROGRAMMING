#include <stdio.h>

int main() {
    int q, t, s;
    scanf("%d %d %d", &q, &t, &s);
    if (q >= 1 && t > 0 && s == 0) {
        printf("Submission Allowed");
    } else {
        printf("Submission Not Allowed");
    }
    return 0;
}
