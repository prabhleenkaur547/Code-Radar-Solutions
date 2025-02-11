#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check MSB using bitwise AND with 0x80000000 (MSB mask for 32-bit integer)
    if (num & (1 << 31))
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
