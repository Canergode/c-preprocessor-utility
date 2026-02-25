#include <stdio.h>

/* Configuration & Macros */
#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
#define APP_MODE 1  // 1: Active, 0: Passive

/* Helper Function: Integer Power */
long power(int base, int exp) {
    long res = 1;
    while (exp--) res *= base;
    return res;
}

int main() {
    // 1. Build Metadata
    printf("Build: %s %s | Line: %d | Std: %d\n\n",
           __DATE__, __TIME__, __LINE__, __STDC__);

    // 2. Logic Execution
    int b = 4, e = 5;
    printf("Power (%d^%d): %ld\n", b, e, power(b, e));
    printf("Circle Area (r=5): %.2f\n", AREA(5));

    // 3. Conditional Feature
    #if APP_MODE
        printf("Status: Application mode is active.\n");
    #endif

    return 0;
}
