#include <stdio.h>

int main() {
    int n;
    printf("========== ULTIMATE HELLO WORLD MACHINE ==============\n");
    printf("Insert number of hello worlds: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Hello World!\n");
    }
    
    return 0;
}