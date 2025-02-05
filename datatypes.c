#include <stdio.h>

int main() {
    int integerVar = 10;
    float floatVar = 3.14;
    double doubleVar = 3.14159265358979;
    char charVar = 'A';
    printf("Integer value: %d\n", integerVar);
    printf("Float value: %.2f\n", floatVar);
    printf("Double value: %.15f\n", doubleVar);
    printf("Character value: %c\n", charVar);
    
    return 0;
}
