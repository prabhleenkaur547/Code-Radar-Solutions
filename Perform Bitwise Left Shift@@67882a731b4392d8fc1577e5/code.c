#include <stdio.h>

int main() {
    int num, shift;
    scanf("%d %d", &num, &shift);
    
    printf("%d\n", num << shift); // Bitwise Left Shift operation
    
    return 0;
}
