#include <stdio.h>

int main() {
    int num = 25;
    int *ptr = &num; 

    printf("Value of num using pointer: %d\n", *ptr); 

    return 0;
}
